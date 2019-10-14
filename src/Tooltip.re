

[@bs.module "rsuite"]
[@react.component]
external make: (
  ~style: ReactDOMRe.Style.t=?,
  ~children: React.element=?,
  ~arrowOffsetLeft: string=?,
  ~arrowOffsetTop: string=?,
  ~positionLeft: int=?,
  ~positionTop: int=?,
  ~classPrefix: string=?,
) => React.element = "Tooltip";
