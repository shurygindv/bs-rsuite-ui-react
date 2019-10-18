

[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~componentClass: unit => React.element=?
  ) =>
  React.element =
  "Timeline";

module Item = {
  [@bs.module "rsuite"] [@bs.scope "Timeline"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~dot: React.element=?,
      ~componentClass: unit => React.element=?
      ) =>
    React.element =
    "Item";
};