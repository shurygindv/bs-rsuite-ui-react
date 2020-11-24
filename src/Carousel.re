[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~className: string=?,
    ~classPrefix: string=?,
    ~shape: [@bs.string] [ | `dot | `bar]=?,
    ~autoplay: bool=?,
    ~autoplayInterval: int=?,
    ~placement: [@bs.string] [ | `top | `bottom | `left | `right]=?,
    ~componentClass: 'a => React.element=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Carousel";
