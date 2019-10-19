[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~circle: bool=?,
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
