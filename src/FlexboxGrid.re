[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    ~align: [@bs.string] [ | `top | `middle | `bottom]=?,
    ~justify: [@bs.string] [
                | `start
                | [@bs.as "end"] `end_
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
