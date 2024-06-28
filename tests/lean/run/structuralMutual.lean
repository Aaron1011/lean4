mutual
inductive A
  | self : A → A
  | other : B → A
  | empty
inductive B
  | self : B → B
  | other : A → B
  | empty
end


mutual
def A.size : A → Nat
  | .self a => a.size + 1
  | .other b => b.size + 1
  | .empty => 0
termination_by structurally x => x
def B.size : B → Nat
  | .self b => b.size + 1
  | .other a => a.size + 1
  | .empty => 0
termination_by structurally x => x
end

mutual
def A.subs : (a : A) → (Fin a.size → A ⊕ B)
  | .self a => Fin.lastCases (.inl a) (a.subs)
  | .other b => Fin.lastCases (.inr b) (b.subs)
  | .empty => Fin.elim0
termination_by structurally x => x
def B.subs : (b : B) → (Fin b.size → A ⊕ B)
  | .self b => Fin.lastCases (.inr b) (b.subs)
  | .other a => Fin.lastCases (.inl a) (a.subs)
  | .empty => Fin.elim0
termination_by structurally x => x
end

theorem A_size_eq1 (a : A) : (A.self a).size = a.size + 1 := rfl
theorem A_size_eq2 (b : B) : (A.other b).size = b.size + 1 := rfl
theorem A_size_eq3 : A.empty.size = 0  := rfl
theorem B_size_eq1 (b : B) : (B.self b).size = b.size + 1 := rfl
theorem B_size_eq2 (a : A) : (B.other a).size = a.size + 1 := rfl
theorem B_size_eq3 : B.empty.size = 0  := rfl

-- Theorems

mutual
def A.hasNoBEmpty : A → Prop
  | .self a => a.hasNoBEmpty
  | .other b => b.hasNoBEmpty
  | .empty => True
termination_by structurally x => x
def B.hasNoBEmpty : B → Prop
  | .self b => b.hasNoBEmpty
  | .other a => a.hasNoBEmpty
  | .empty => False
termination_by structurally x => x
end

-- Mixing Prop and Nat.
-- This works because both `Prop` and `Nat` are in the same universe (`Type`)

mutual
open Classical
def A.hasNoAEmpty : A → Prop
  | .self a => a.hasNoAEmpty
  | .other b => b.oddCount > 0
  | .empty => False
termination_by structurally x => x
def B.oddCount : B → Nat
  | .self b => b.oddCount + 1
  | .other a => if a.hasNoAEmpty then 0 else 1
  | .empty => 0
termination_by structurally x => x
end

-- Higher levels, but the same level `Type u`

mutual
open Classical
def A.type.{u} : A → Type u
  | .self a => Unit × a.type
  | .other b => Unit × b.type
  | .empty => PUnit
termination_by structurally x => x
def B.type.{u} : B → Type u
  | .self b => PUnit × b.type
  | .other a => PUnit × a.type
  | .empty => PUnit
termination_by structurally x => x
end


-- Mixed levels. This works because both `Prop` and `Nat` are in the same universe (`Type`)

-- TODO: Should this work?

-- set_option trace.Elab.definition.structural true in
/--
error: failed to eliminate recursive application
  a.strangeType
-/
#guard_msgs in
mutual
open Classical
def A.strangeType : A → Type
  | .self a => Unit × a.strangeType
  | .other b => Fin b.odderCount
  | .empty => Unit
termination_by structurally x => x
def B.odderCount : B → Nat
  | .self b => b.odderCount + 1
  | .other a => if Nonempty a.strangeType then 0 else 1
  | .empty => 0
termination_by structurally x => x
end

namespace Reflexive

-- A mutual inductive reflexive data type
-- But these still only ever eliminate into `Prop`, so the following is not an example
-- for a reflexive data type that can eliminiate into `Type`, although `Acc` is:

mutual
inductive AccA {α : Sort u} (r : α → α → Prop) : α → Prop where
  | intro (x : α) (h : (y : α) → r y x → AccB r y) : AccA r x
inductive AccB {α : Sort u} (r : α → α → Prop) : α → Prop where
  | intro (x : α) (h : (y : α) → r y x → AccA r y) : AccB r x
end

-- TODO: What kind of recursive function can I even define over this data type,
-- given that it can only eliminate into `Prop`?

end Reflexive


namespace MutualIndNonMutualFun

mutual
inductive A
  | self : A → A
  | other : B → A
  | empty
inductive B
  | self : B → B
  | other : A → B
  | empty
end

/--
error: argument #1 cannot be used for structural recursion
  structural mutual recursion only supported without reordering for now
-/
#guard_msgs in
def A.self_size : A → Nat
  | .self a => a.self_size + 1
  | .other _ => 0
  | .empty => 0
termination_by structurally x => x

/--
error: argument #1 cannot be used for structural recursion
  structural mutual recursion only supported without reordering for now
-/
#guard_msgs in
def B.self_size : B → Nat
  | .self b => b.self_size + 1
  | .other _ => 0
  | .empty => 0
termination_by structurally x => x

end MutualIndNonMutualFun
