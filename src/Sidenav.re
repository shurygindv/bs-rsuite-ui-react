[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~activeKey: string=?,
    ~expanded: bool=?,
    ~openKeys: list(string)=?,
    ~defaultOpenKeys: list(string)=?,
    ~onOpenChange: (list(string), ReactEvent.Synthetic.t) => unit=?,
    ~onSelect: (list(string), ReactEvent.Synthetic.t) => unit=?,
    ~componentClass: unit => React.element=?,
    ~appearance: [@bs.string] [
                  | `default
                  | `inverse
                  | `subtle
                ]
     =?,
  ) =>
  React.element =
  "Sidenav";

  
module Header = {
  [@bs.module "rsuite"] [@bs.scope "Sidenav"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
    ) =>
    React.element =
    "Header";
};

module Body = {
  [@bs.module "rsuite"] [@bs.scope "Sidenav"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
    ) =>
    React.element =
    "Body";
};