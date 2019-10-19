[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~children: React.element,
    ~style: ReactDOMRe.Style.t=?,
    ~classPrefix: string=?,
    ~className: string=?,

    ~appearance: [@bs.string] [
                  | `default
                  | `tabs
                  | `subtle
                ]
     =?,
     ~justified: bool=?,
     ~onSelect: (string, ReactEvent.Synthetic.t) => unit=?,
     ~pills: bool=?,
     ~pullRight: bool=?,
     ~stacked: bool=?,
  ) =>
  React.element =
  "Nav";


  module Item = {
    [@bs.module "rsuite"] [@bs.scope "Nav"] [@react.component]
    external make:
      (
        ~children: React.element,

        ~style: ReactDOMRe.Style.t=?,
        ~classPrefix: string=?,
        ~className: string=?,
        ~active: bool=?,
        ~componentClass: unit => React.element=?,
        ~disabled: bool=?,
        ~href: string=?,
        ~icon: (Icon.Props.t) => React.element=?,
        ~onSelect: (string, ReactEvent.Synthetic.t) => unit=?,
      ) =>
      React.element =
      "Item";
  };
  