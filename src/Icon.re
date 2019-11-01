module Props = {
  [@bs.deriving abstract]
  type t = {
    [@bs.optional] style: ReactDOMRe.Style.t,
    [@bs.optional] children: React.element,
    [@bs.optional] classPrefix: string,
    [@bs.optional] className: string,
  
    [@bs.optional] svgStyle: ReactDOMRe.Style.t,
    [@bs.optional] spin: bool,
    [@bs.optional] pulse: bool,
    [@bs.optional] inverse: bool,
    [@bs.optional] rotate: int,
    [@bs.optional] fixedWidth: bool,
    [@bs.optional] icon: string,
    [@bs.optional] size: string,
    [@bs.optional] flip: string
  }
};


[@bs.module "rsuite"]
[@react.component]
external make: (
  ~style: ReactDOMRe.Style.t=?,
  ~children: React.element=?,
  ~classPrefix: string=?,
  ~className: string=?,

  ~svgStyle: ReactDOMRe.Style.t=?,
  ~spin: bool=?,
  ~pulse: bool=?,
  ~inverse: bool=?,
  ~rotate: int=?,
  ~fixedWidth: bool=?,
  ~icon: string=?, // TODO: or SVGIcon {id, view}
  ~size: [@bs.string] [
    | `lg
  ]=?,
  ~flip: [@bs.string] [
    | `vertical
    | `horizontal
  ]=?,

  ~onClick: ReactEvent.Mouse.t => unit=?,
) => React.element = "Icon";
