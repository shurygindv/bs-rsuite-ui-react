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