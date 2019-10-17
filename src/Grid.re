[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~componentClass: unit => React.element=?,
    ~fluid: bool=?,
  ) =>
  React.element =
  "Grid";

