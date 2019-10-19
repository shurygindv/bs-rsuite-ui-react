
[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~htmlFor: string=?,
    ~srOnly: bool=?,
  ) =>
  React.element =
  "ControlLabel";
