
[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~children: React.element=?,
    ~style: ReactDOMRe.Style.t=?,
    ~className: string=?,

    ~href: string=?,
    ~tabIndex: string=?,
    ~disabled: bool=?,
    ~onClick: ReactEvent.Mouse.t => unit=?,
    ~componentClass: 'a=> React.element=?,
  ) =>
  React.element =
  "SafeAnchor";