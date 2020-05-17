[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~componentClass: 'a=> React.element=?,
    ~gutter: int=?,
  ) =>
  React.element =
  "Row";

