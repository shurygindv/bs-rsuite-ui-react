[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~backdrop: bool=?,
    ~center: bool=?,
    ~inverse: bool=?,
    ~vertical: bool=?,
    ~content: React.element=?,
    ~size:  [ | `lg | `md | `sm | `xs]=?,
    ~speed:  [ | `fast | `normal | `slow]=?,

    ~onClick: ReactEvent.Mouse.t => unit=?,
  ) =>
  React.element =
  "Loader";
