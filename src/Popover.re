[@bs.module "rsuite"]
[@react.component]
external make: (
  ~style: ReactDOMRe.Style.t=?,
  ~children: React.element=?,
  ~classPrefix: string=?,
  ~title: React.element=?,
) => React.element = "Popover";
