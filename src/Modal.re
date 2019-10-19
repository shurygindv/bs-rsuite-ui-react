[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,

    ~autoFocus: bool=?,
    ~backdrop: [@bs.string] [ // todo: bool
      | `static
    ]=?,
    ~backdropClassName: string=?,
    ~dialogClassName: string=?,
    ~dialogComponentClass: unit => React.element=?,
    ~enforceFocus: bool=?,
    ~full: bool=?,
    ~keyboard: bool=?,
    ~overflow: bool=?,
    ~show: bool=?,

    ~onEnter: unit => unit=?,
    ~onEntered: unit => unit=?,
    ~onEntering: unit => unit=?,

    ~onExit: unit => unit=?,
    ~onExited: unit => unit=?,
    ~onExiting: unit => unit=?,

    ~onHide: unit => unit=?,
    ~onShow: unit => unit=?,

    ~size: [@bs.string] [
                  | `lg
                  | `md
                  | `sm
                  | `xs
                ]
     =?,
  ) =>
  React.element =
  "Modal";

  
module Header = {
  [@bs.module "rsuite"] [@bs.scope "Modal"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~closeButton: bool=?,
      ~onHide: ReactEvent.Synthetic.t => unit=?,
    ) =>
    React.element =
    "Header";
};

module Title = {
  [@bs.module "rsuite"] [@bs.scope "Modal"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
    ) =>
    React.element =
    "Title";
};


module Body = {
  [@bs.module "rsuite"] [@bs.scope "Modal"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
    ) =>
    React.element =
    "Body";
};


module Footer = {
  [@bs.module "rsuite"] [@bs.scope "Modal"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
    ) =>
    React.element =
    "Footer";
};