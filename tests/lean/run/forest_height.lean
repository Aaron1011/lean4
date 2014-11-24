import data.nat.basic data.sum data.sigma logic.wf data.bool
open nat sigma

inductive tree (A : Type) : Type :=
node : A → forest A → tree A
with forest : Type :=
nil  : forest A,
cons : tree A → forest A → forest A

namespace manual
check tree.rec_on

definition tree.height {A : Type} (t : tree A) : nat :=
tree.rec_on t
  (λ (a : A) (f : forest A) (ih : nat), succ ih)
  zero
  (λ (t : tree A) (f : forest A) (ih₁ : nat) (ih₂ : nat), succ (max ih₁ ih₂))

definition forest.height {A : Type} (f : forest A) : nat :=
forest.rec_on f
  (λ (a : A) (f : forest A) (ih : nat), succ ih)
  zero
  (λ (t : tree A) (f : forest A) (ih₁ : nat) (ih₂ : nat), succ (max ih₁ ih₂))

definition tree_forest (A : Type) := sum (tree A) (forest A)

definition tree_forest_height {A : Type} (t : tree_forest A) : nat :=
sum.rec_on t (λ t, tree.height t) (λ f, forest.height f)

definition tree_forest.subterm {A : Type} : tree_forest A → tree_forest A → Prop :=
inv_image lt tree_forest_height

definition tree_forest.subterm.wf [instance] (A : Type) : well_founded (@tree_forest.subterm A) :=
inv_image.wf tree_forest_height lt.wf

infix [local] `≺`:50 := tree_forest.subterm

definition tree_forest.height_lt.node {A : Type} (a : A) (f : forest A) : sum.inr _ f ≺ sum.inl _ (tree.node a f) :=
have aux : forest.height f < tree.height (tree.node a f), from
  lt.base (forest.height f),
aux

definition tree_forest.height_lt.cons₁ {A : Type} (t : tree A) (f : forest A) : sum.inl _ t ≺ sum.inr _ (forest.cons t f) :=
have aux : tree.height t < forest.height (forest.cons t f), from
  le_imp_lt_succ (max.left _ _),
aux

definition tree_forest.height_lt.cons₂ {A : Type} (t : tree A) (f : forest A) : sum.inr _ f ≺ sum.inr _ (forest.cons t f) :=
have aux : forest.height f < forest.height (forest.cons t f), from
  le_imp_lt_succ (max.right _ _),
aux

definition kind {A : Type} (t : tree_forest A) : bool :=
sum.cases_on t (λ t, bool.tt) (λ f, bool.ff)

definition map.res {A : Type} (B : Type) (t : tree_forest A) :=
Σ r : tree_forest B, kind r = kind t

set_option find_decl.expensive true

find_decl bool.ff ≠ bool.tt

-- map using well-founded recursion. We could have used the default recursor.
-- this is just a test for the definitional package
definition map.F {A B : Type} (f : A → B) (tf₁ : tree_forest A) : (Π tf₂ : tree_forest A, tf₂ ≺ tf₁ → map.res B tf₂) → map.res B tf₁ :=
sum.cases_on tf₁
  (λ t : tree A, tree.cases_on t
    (λ a₁ f₁ (r : Π (tf₂ : tree_forest A), tf₂ ≺ sum.inl (forest A) (tree.node a₁ f₁) → map.res B tf₂),
       show map.res B (sum.inl (forest A) (tree.node a₁ f₁)), from
       have rf₁ : map.res B (sum.inr _ f₁), from r (sum.inr _ f₁) (tree_forest.height_lt.node a₁ f₁),
       have nf₁ : forest B, from sum.cases_on (dpr₁ rf₁)
          (λf (h : kind (sum.inl (forest B) f) = kind (sum.inr (tree A) f₁)), absurd (eq.symm h) bool.ff_ne_tt)
          (λf h, f)
          (dpr₂ rf₁),
       dpair (sum.inl (forest B) (tree.node (f a₁) nf₁)) rfl))
  (λ f : forest A, forest.cases_on f
    (λ r : Π (tf₂ : tree_forest A), tf₂ ≺ sum.inr (tree A) (forest.nil A) → map.res B tf₂,
       show map.res B (sum.inr (tree A) (forest.nil A)), from
       dpair (sum.inr (tree B) (forest.nil B)) rfl)
    (λ t₁ f₁ (r : Π (tf₂ : tree_forest A), tf₂ ≺ sum.inr (tree A) (forest.cons t₁ f₁) → map.res B tf₂),
       show map.res B (sum.inr (tree A) (forest.cons t₁ f₁)), from
       have rt₁ : map.res B (sum.inl _ t₁), from r (sum.inl _ t₁) (tree_forest.height_lt.cons₁ t₁ f₁),
       have rf₁ : map.res B (sum.inr _ f₁), from r (sum.inr _ f₁) (tree_forest.height_lt.cons₂ t₁ f₁),
       have nt₁ : tree B, from sum.cases_on (dpr₁ rt₁)
         (λ t h, t)
         (λ f h, absurd h bool.ff_ne_tt)
         (dpr₂ rt₁),
       have nf₁ : forest B, from sum.cases_on (dpr₁ rf₁)
          (λf (h : kind (sum.inl (forest B) f) = kind (sum.inr (tree A) f₁)), absurd (eq.symm h) bool.ff_ne_tt)
          (λf h, f)
          (dpr₂ rf₁),
       dpair (sum.inr (tree B) (forest.cons nt₁ nf₁)) rfl))

definition map {A B : Type} (f : A → B) (tf : tree_forest A) : map.res B tf :=
well_founded.fix (@map.F A B f) tf

eval map succ (sum.inl (forest nat) (tree.node 2 (forest.cons (tree.node 1 (forest.nil nat)) (forest.nil nat))))

end manual
