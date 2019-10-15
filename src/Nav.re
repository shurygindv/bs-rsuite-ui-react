[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~componentClass: unit => React.element=?,
    ~appearance: [@bs.string] [
                  | `default
                  | `inverse
                  | `subtle
                ]
     =?,
  ) =>
  React.element =
  "Navbar";

  
module Header = {
  [@bs.module "rsuite"] [@bs.scope "Navbar"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
    ) =>
    React.element =
    "Header";
};

module Body = {
  [@bs.module "rsuite"] [@bs.scope "Navbar"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
    ) =>
    React.element =
    "Body";
};