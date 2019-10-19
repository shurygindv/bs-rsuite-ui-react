[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~maxCount: int=?,
    ~content: React.element=?
  ) =>
  React.element =
  "Badge";
