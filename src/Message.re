

[@bs.module "rsuite"] [@react.component]
external make: (
  ~children: React.element=?,
  ~classPrefix: string=?,
  ~closable: bool=?,
  ~showIcon: bool=?,
  ~full: bool=?,
  ~closeLabel: string=?,
  ~description: React.element=?,
  ~title: React.element=?,
  ~onClose: unit => unit=?,
  ~_type: [@bs.string] [
    | `info
    | `warning
    | `error
    | `success
  ]=?,
) => React.element = "Message";