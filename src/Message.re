

[@bs.module "rsuite"] [@react.component]
external make: (
  ~style: ReactDOMRe.Style.t=?,
  ~children: React.element=?,
  ~classPrefix: string=?,
  ~className: string=?,
  
  ~closable: bool=?,
  ~showIcon: bool=?,
  ~full: bool=?,
  ~closeLabel: string=?,
  ~description: React.element=?,
  ~title: React.element=?,
  ~onClose: unit => unit=?,
  ~onClick: ReactEvent.Mouse.t => unit=?,
  ~_type: [@bs.string] [
    | `info
    | `warning
    | `error
    | `success
  ]=?,
) => React.element = "Message";