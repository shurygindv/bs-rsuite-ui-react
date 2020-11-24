[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~className: string=?,
    ~classPrefix: string=?,
    ~shape:  [ | `dot | `bar]=?,
    ~autoplay: bool=?,
    ~autoplayInterval: int=?,
    ~placement:  [ | `top | `bottom | `left | `right]=?,
    ~componentClass: 'a => React.element=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Carousel";
