[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~componentClass: unit => React.element=?,
    ~gutter: int=?,
  ) =>
  React.element =
  "Row";

