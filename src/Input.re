[@bs.module "rsuite"]
[@react.component]
external make: (
  ~style: ReactDOMRe.Style.t=?,
  ~classPrefix: string=?,
  ~defaultValue: int=?,
  ~value: int=?,
  ~disabled: bool=?,
  ~_type: [@bs.string] [
    | `text
  ]=?,
  ~size: [@bs.string] [
    | `lg
    | `md
    | `sm
    | `xs
  ]=?
) => React.element = "Input";
