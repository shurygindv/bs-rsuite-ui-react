[@bs.module "rsuite"]
[@react.component]
external make: (
  ~style: ReactDOMRe.Style.t=?,
  ~backdrop: bool=?,
  ~center: bool=?,
  ~inverse: bool=?,
  ~vertical: bool=?,
  ~content: React.element=?,
  ~size: [@bs.string] [
    | `lg
    | `md
    | `sm
    | `xs
  ]=?,
  ~speed: [@bs.string] [
    | `fast
    | `normal
    | `slow
  ]=?,
) => React.element = "Loader";
