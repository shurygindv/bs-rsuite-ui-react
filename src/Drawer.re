[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~autoFocus: bool=?,
    ~enforceFocus: bool=?,
    ~full: bool=?,
    ~keyboard: bool=?,
    ~show: bool=?,
    ~backdrop:  [ | `static]=?, // todo: +boolean
    ~onEnter: unit => unit=?,
    ~onEntered: unit => unit=?,
    ~onEntering: unit => unit=?,
    ~onExit: unit => unit=?,
    ~onExited: unit => unit=?,
    ~onExiting: unit => unit=?,
    ~onHide: unit => unit=?,
    ~onShow: unit => unit=?,
    ~placement:  [
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
                  =?,
    ~size:  [ | `lg | `md | `sm | `xs]=?
  ) =>
  React.element =
  "Drawer";
