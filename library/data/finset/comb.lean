/-
Copyright (c) 2015 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Leonardo de Moura, Jeremy Avigad

Combinators for finite sets.
-/
import data.finset.basic logic.identities
open list quot subtype decidable perm function

namespace finset

/- map -/
section map
variables {A B : Type}
variable [h : decidable_eq B]
include h

definition map (f : A → B) (s : finset A) : finset B :=
quot.lift_on s
  (λ l, to_finset (list.map f (elt_of l)))
  (λ l₁ l₂ p, quot.sound (perm_erase_dup_of_perm (perm_map _ p)))

theorem map_empty (f : A → B) : map f ∅ = ∅ :=
rfl
end map

/- filter and set-builder notation -/
section filter
  variables {A : Type} [deceq : decidable_eq A]
  include deceq
  variables (p : A → Prop) [decp : decidable_pred p] (s : finset A) {x : A}
  include decp

  definition filter : finset A :=
  quot.lift_on s
    (λl, to_finset_of_nodup
      (list.filter p (subtype.elt_of l))
      (list.nodup_filter p (subtype.has_property l)))
    (λ l₁ l₂ u, quot.sound (perm.perm_filter u))

  notation `{` binders ∈ s `|` r:(scoped:1 p, filter p s) `}` := r

  theorem filter_empty : filter p ∅ = ∅ := rfl

  variables {p s}

  theorem of_mem_filter : x ∈ filter p s → p x :=
  quot.induction_on s (take l, list.of_mem_filter)

  theorem mem_of_mem_filter : x ∈ filter p s → x ∈ s :=
  quot.induction_on s (take l, list.mem_of_mem_filter)

  theorem mem_filter_of_mem {x : A} : x ∈ s → p x → x ∈ filter p s :=
  quot.induction_on s (take l, list.mem_filter_of_mem)

  variables (p s)

  theorem mem_filter_eq : x ∈ filter p s = (x ∈ s ∧ p x) :=
  propext (iff.intro
    (assume H, and.intro (mem_of_mem_filter H) (of_mem_filter H))
    (assume H, mem_filter_of_mem (and.left H) (and.right H)))
end filter

/- set difference -/
section diff
  variables {A : Type} [deceq : decidable_eq A]
  include deceq

  definition diff (s t : finset A) : finset A := {x ∈ s | x ∉ t}
  infix `\`:70 := diff

  theorem mem_of_mem_diff {s t : finset A} {x : A} (H : x ∈ s \ t) : x ∈ s :=
  mem_of_mem_filter H

  theorem not_mem_of_mem_diff {s t : finset A} {x : A} (H : x ∈ s \ t) : x ∉ t :=
  of_mem_filter H

  theorem mem_diff {s t : finset A} {x : A} (H1 : x ∈ s) (H2 : x ∉ t) : x ∈ s \ t :=
  mem_filter_of_mem H1 H2

  theorem mem_diff_iff (s t : finset A) (x : A) : x ∈ s \ t ↔ x ∈ s ∧ x ∉ t :=
  iff.intro
    (assume H, and.intro (mem_of_mem_diff H) (not_mem_of_mem_diff H))
    (assume H, mem_diff (and.left H) (and.right H))

  theorem mem_diff_eq (s t : finset A) (x : A) : x ∈ s \ t = (x ∈ s ∧ x ∉ t) :=
  propext !mem_diff_iff

  theorem union_diff_cancel {s t : finset A} (H : s ⊆ t) : s ∪ (t \ s) = t :=
  ext (take x, iff.intro
    (assume H1 : x ∈ s ∪ (t \ s),
      or.elim (mem_or_mem_of_mem_union H1)
        (assume H2 : x ∈ s, mem_of_subset_of_mem H H2)
        (assume H2 : x ∈ t \ s, mem_of_mem_diff H2))
    (assume H1 : x ∈ t,
      decidable.by_cases
        (assume H2 : x ∈ s, mem_union_left _ H2)
        (assume H2 : x ∉ s, mem_union_right _ (mem_diff H1 H2))))

  theorem diff_union_cancel {s t : finset A} (H : s ⊆ t) : (t \ s) ∪ s = t :=
  eq.subst !union.comm (!union_diff_cancel H)
end diff

/- all -/
section all
variables {A : Type}
definition all (s : finset A) (p : A → Prop) : Prop :=
quot.lift_on s
  (λ l, all (elt_of l) p)
  (λ l₁ l₂ p, foldr_eq_of_perm (λ a₁ a₂ q, propext !and.left_comm) p true)

-- notation for bounded quantifiers
notation `forallb` binders `∈` a `,` r:(scoped:1 P, P) := all a r
notation `∀₀` binders `∈` a `,` r:(scoped:1 P, P) := all a r

theorem all_empty (p : A → Prop) : all ∅ p = true :=
rfl

theorem of_mem_of_all {p : A → Prop} {a : A} {s : finset A} : a ∈ s → all s p → p a :=
quot.induction_on s (λ l i h, list.of_mem_of_all i h)

theorem all_implies {p q : A → Prop} {s : finset A} : all s p → (∀ x, p x → q x) → all s q :=
quot.induction_on s (λ l h₁ h₂, list.all_implies h₁ h₂)

variable [h : decidable_eq A]
include h

theorem all_union {p : A → Prop} {s₁ s₂ : finset A} :  all s₁ p → all s₂ p → all (s₁ ∪ s₂) p :=
quot.induction_on₂ s₁ s₂ (λ l₁ l₂ a₁ a₂, all_union a₁ a₂)

theorem all_of_all_union_left {p : A → Prop} {s₁ s₂ : finset A} : all (s₁ ∪ s₂) p → all s₁ p :=
quot.induction_on₂ s₁ s₂ (λ l₁ l₂ a, list.all_of_all_union_left a)

theorem all_of_all_union_right {p : A → Prop} {s₁ s₂ : finset A} : all (s₁ ∪ s₂) p → all s₂ p :=
quot.induction_on₂ s₁ s₂ (λ l₁ l₂ a, list.all_of_all_union_right a)

theorem all_insert_of_all {p : A → Prop} {a : A} {s : finset A} : p a → all s p → all (insert a s) p :=
quot.induction_on s (λ l h₁ h₂, list.all_insert_of_all h₁ h₂)

theorem all_erase_of_all {p : A → Prop} (a : A) {s : finset A}: all s p → all (erase a s) p :=
quot.induction_on s (λ l h, list.all_erase_of_all a h)

theorem all_inter_of_all_left {p : A → Prop} {s₁ : finset A} (s₂ : finset A) : all s₁ p → all (s₁ ∩ s₂) p :=
quot.induction_on₂ s₁ s₂ (λ l₁ l₂ h, list.all_inter_of_all_left _ h)

theorem all_inter_of_all_right {p : A → Prop} {s₁ : finset A} (s₂ : finset A) : all s₂ p → all (s₁ ∩ s₂) p :=
quot.induction_on₂ s₁ s₂ (λ l₁ l₂ h, list.all_inter_of_all_right _ h)
end all

section cross_product
variables {A B : Type}
definition cross_product (s₁ : finset A) (s₂ : finset B) : finset (A × B) :=
quot.lift_on₂ s₁ s₂
  (λ l₁ l₂,
    to_finset_of_nodup (list.cross_product (elt_of l₁) (elt_of l₂))
                       (nodup_cross_product (has_property l₁) (has_property l₂)))
  (λ v₁ v₂ w₁ w₂ p₁ p₂, quot.sound (perm_cross_product p₁ p₂))

infix * := cross_product

theorem empty_cross_product (s : finset B) : @empty A * s = ∅ :=
quot.induction_on s (λ l, rfl)

theorem mem_cross_product {a : A} {b : B} {s₁ : finset A} {s₂ : finset B}
        : a ∈ s₁ → b ∈ s₂ → (a, b) ∈ s₁ * s₂ :=
quot.induction_on₂ s₁ s₂ (λ l₁ l₂ i₁ i₂, list.mem_cross_product i₁ i₂)

theorem mem_of_mem_cross_product_left {a : A} {b : B} {s₁ : finset A} {s₂ : finset B}
        : (a, b) ∈ s₁ * s₂ → a ∈ s₁ :=
quot.induction_on₂ s₁ s₂ (λ l₁ l₂ i, list.mem_of_mem_cross_product_left i)

theorem mem_of_mem_cross_product_right {a : A} {b : B} {s₁ : finset A} {s₂ : finset B}
        : (a, b) ∈ s₁ * s₂ → b ∈ s₂ :=
quot.induction_on₂ s₁ s₂ (λ l₁ l₂ i, list.mem_of_mem_cross_product_right i)

theorem cross_product_empty (s : finset A) : s * @empty B = ∅ :=
ext (λ p,
  match p with
  | (a, b) := iff.intro
     (λ i, absurd (mem_of_mem_cross_product_right i) !not_mem_empty)
     (λ i, absurd i !not_mem_empty)
  end)
end cross_product
end finset
