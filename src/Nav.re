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
     ~vertical: bool=?,
     ~activeKey: string=?,
     ~pullRight: bool=?,
     ~reversed: bool=?,

     ~onClick: ReactEvent.Mouse.t => unit=?,
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
        ~disabled: bool=?,
        ~divider: bool=?,
        ~panel: bool=?,
        ~href: string=?,
        ~eventKey: string=?,
        ~hasTooltip: bool=?,
        ~icon: React.element=?,
        ~onSelect: (string, ReactEvent.Synthetic.t) => unit=?,
        ~onClick: ReactEvent.Mouse.t => unit=?,
        ~componentClass: 'a=> React.element=?,
      ) =>
      React.element =
      "Item";
  };
  