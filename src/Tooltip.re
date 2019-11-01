

[@bs.module "rsuite"]
[@react.component]
external make: (
  ~style: ReactDOMRe.Style.t=?,
  ~children: React.element=?,
  ~classPrefix: string=?,
  ~className: string=?,

  ~arrowOffsetLeft: string=?,
  ~arrowOffsetTop: string=?,
  ~positionLeft: int=?,
  ~positionTop: int=?,

  ~onClick: ReactEvent.Mouse.t => unit=?,
) => React.element = "Tooltip";
