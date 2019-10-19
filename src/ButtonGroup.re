[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~block: bool=?,
    ~justified: bool=?,
    ~vertical: bool=?,
    ~size: [@bs.string] [ | `lg | `md | `sm | `xs]=?
  ) =>
  React.element =
  "ButtonGroup";
