[@bs.module "rsuite"] 
[@react.component]
external make: (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~src: string=?,
    ~alt: string=?,
    ~circle: bool=?,
    ~size: [@bs.string] [
      | `lg
      | `md
      | `sm
      | `xs
    ]=?
) => React.element = "Avatar";
