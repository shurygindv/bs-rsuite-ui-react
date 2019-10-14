

[@bs.module "rsuite"] [@react.component]
external make: (
  ~classPrefix: string=?,
  ~closable: bool=?,
  ~showIcon: bool=?,
  ~full: bool=?,
  ~closeLabel: string=?,
  ~description: React.element=?,
  ~title: React.element=?,
  ~onClose: unit => unit=?,
  ~type__: [@bs.string] [
    | `info
    | `warning
    | `error
    | `success
  ]=?,
) => React.element = "Message";