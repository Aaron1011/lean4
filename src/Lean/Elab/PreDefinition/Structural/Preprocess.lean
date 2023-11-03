/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Meta.Transform
import Lean.Elab.RecAppSyntax

namespace Lean.Elab.Structural
open Meta

private def shouldBetaReduce (e : Expr) (recFnName : Name) : Bool :=
  if e.isHeadBetaTarget then
    e.getAppFn.find? (·.isConstOf recFnName) |>.isSome
  else
    false

/--
Preprocesses the expessions to improve the effectiveness of `elimRecursion`.

* Beta reduce terms where the recursive function occurs in the lambda term.
  Example:
  ```
  def f : Nat → Nat
    | 0 => 1
    | i+1 => (fun x => f x) i
  ```

* Floats out the RecApp markers.
  Example:
  ```
  def f : Nat → Nat
    | 0 => 1
    | i+1 => (f x) i
  ```
-/
def preprocess (e : Expr) (recFnName : Name) : CoreM Expr :=
  Core.transform e
    (pre := fun e =>
      if shouldBetaReduce e recFnName then
        return .visit e.headBeta
      else
        return .continue)
    (post := fun e =>
      if e.isApp && e.getAppFn.isMData && e.getAppFn.mdata!.isRecApp then
        return .visit (e.withApp fun f as => .mdata f.mdata! (mkAppN (f.mdataExpr!) as))
      else
        return .continue)


end Lean.Elab.Structural
