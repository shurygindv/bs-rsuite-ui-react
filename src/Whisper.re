

[@bs.module "rsuite"]
[@react.component]
external make: (
  ~style: ReactDOMRe.Style.t=?,
  ~children: React.element=?,
  ~container: Dom.element=?,
  ~delay: int=?,
  ~delayHide: int=?,
  ~delayShow: int=?,
  ~preventOverflow: bool=?,
  ~onBlur: ReactEvent.Focus.t => unit=?,
  ~onClick: ReactEvent.Mouse.t => unit=?,
  ~onFocus: ReactEvent.Focus.t => unit=?,
  ~onMouseOut: ReactEvent.Mouse.t => unit=?, 
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
  ]=?,
) => React.element = "Whisper";
