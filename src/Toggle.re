

[@bs.module "rsuite"]
[@react.component]
external make: (
  ~style: ReactDOMRe.Style.t=?,
  ~classPrefix: string=?,
  ~checkedChildren: React.element=?,
  ~unCheckedChildren: React.element=?,
  ~checked: bool=?,
  ~defaultChecked: bool=?,
  ~disabled: bool=?,
  ~onChange: (bool, ReactEvent.Synthetic.t) => unit=?,
  ~size: [@bs.string] [
    | `lg
    | `md
    | `sm
  ]=?,
) => React.element = "Toggle";
