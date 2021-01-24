[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~circle: bool=?,
    ~active: bool=?,
    ~target: string=?,
    ~disabled: bool=?,
    ~ripple: bool=?,
    ~block: bool=?,
    ~loading: bool=?,
    ~_type: [@bs.string] [
      | `submit
      | `button
      | `reset
    ] = ?,
    ~href: string=?,
    ~icon: React.element=?,
    ~placement: [@bs.string] [
                  | `left
                  | `leftStart
                  | `leftEnd
                  | `right
                  | `rightStart
                  | `rightEnd
                  | `top
                  | `topStart
                  | `topEnd
                  | `bottom
                  | `bottomStart
                  | `bottomEnd
                ]
                  =?
  ) =>
  React.element =
  "IconButton";
