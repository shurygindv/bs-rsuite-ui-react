

[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    ~componentClass: 'a=> React.element=?
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
      ~className: string=?,
      ~dot: React.element=?,
      ~componentClass: 'a=> React.element=?
      ) =>
    React.element =
    "Item";
};