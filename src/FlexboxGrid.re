[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    ~align:  [ | `top | `middle | `bottom]=?,
    ~justify:  [
                | `start
                | `end_
                | `center
                | `spaceAround
                | `spaceBetween
              ]
                =?
  ) =>
  React.element =
  "FlexboxGrid";

module Item = {
  [@bs.module "rsuite"] [@bs.scope "FlexboxGrid"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,
      
      ~colspan: int=?,
      ~order: int=?,
      ~componentClass: 'a=> React.element=?
    ) =>
    React.element =
    "Item";
};
