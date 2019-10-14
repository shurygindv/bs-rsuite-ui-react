[@bs.module "rsuite"]
[@react.component]
external make: (
  ~svgStyle: ReactDOMRe.Style.t=?,
  ~children: React.element=?,
  ~spin: bool=?,
  ~pulse: bool=?,
  ~inverse: bool=?,
  ~rotate: int=?,
  ~fixedWidth: bool=?,
  ~icon: string=?,
  ~size: [@bs.string] [
    | `lg
  ]=?,
  ~flip: [@bs.string] [
    | `vertical
    | `horizontal
  ]=?,
) => React.element = "Icon";
