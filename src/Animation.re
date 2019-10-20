type reactFindDOMNode = option(Dom.element);

module Fade = {
  [@bs.module "rsuite"] [@bs.scope "Animation"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~className: string=?,

      ~enteredClassName: string=?,
      ~enteringClassName: string=?,
      ~exitedClassName: string=?,
      ~exitingClassName: string=?,
      ~_in: bool=?,
      // todo: different signatures off repo / off docs
      ~onEnter: (reactFindDOMNode) => unit=?,
      ~onEntered: (reactFindDOMNode) => unit=?,
      ~onEntering: (reactFindDOMNode) => unit=?,

      ~onExit: (reactFindDOMNode) => unit=?,
      ~onExited: (reactFindDOMNode) => unit=?,
      ~onExiting: (reactFindDOMNode) => unit=?,

      ~timeout: int=?,
      ~transitionAppear: bool=?,
      ~unmountOnExit: bool=?,
    ) =>
    React.element =
    "Fade";
};

module Collapse = {
  [@bs.module "rsuite"] [@bs.scope "Animation"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~className: string=?,

      ~dimension: [@bs.string] [
          | `height
          | `width
      ]=?, // todo + callback () => `height | `width
      ~enteredClassName: string=?,
      ~enteringClassName: string=?,
      ~exitedClassName: string=?,
      ~exitingClassName: string=?,
      ~getDimensionValue: (unit) => int=?,
      ~_in: bool=?,

      ~onEnter: (reactFindDOMNode) => unit=?,
      ~onEntered: (reactFindDOMNode) => unit=?,
      ~onEntering: (reactFindDOMNode) => unit=?,

      ~onExit: (reactFindDOMNode) => unit=?,
      ~onExited: (reactFindDOMNode) => unit=?,
      ~onExiting: (reactFindDOMNode) => unit=?,
      ~role: string=?,
      ~timeout: int=?,
      ~transitionAppear: bool=?,
      ~unmountOnExit: bool=?,
    ) =>
    React.element =
    "Collapse";
};

module Bounce = {
  [@bs.module "rsuite"] [@bs.scope "Animation"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~className: string=?,

      ~enteredClassName: string=?,
      ~enteringClassName: string=?,
      ~exitedClassName: string=?,
      ~exitingClassName: string=?,
      ~_in: bool=?,
      // todo: different signatures off repo / off docs
      ~onEnter: (reactFindDOMNode) => unit=?,
      ~onEntered: (reactFindDOMNode) => unit=?,
      ~onEntering: (reactFindDOMNode) => unit=?,

      ~onExit: (reactFindDOMNode) => unit=?,
      ~onExited: (reactFindDOMNode) => unit=?,
      ~onExiting: (reactFindDOMNode) => unit=?,

      ~timeout: int=?,
      ~transitionAppear: bool=?,
      ~unmountOnExit: bool=?,
    ) =>
    React.element =
    "Bounce";
};

module Slide = {
  [@bs.module "rsuite"] [@bs.scope "Animation"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~className: string=?,

      ~enteredClassName: string=?,
      ~enteringClassName: string=?,
      ~exitedClassName: string=?,
      ~exitingClassName: string=?,
      ~_in: bool=?,
      // todo: different signatures off repo / off docs
      ~onEnter: (reactFindDOMNode) => unit=?,
      ~onEntered: (reactFindDOMNode) => unit=?,
      ~onEntering: (reactFindDOMNode) => unit=?,

      ~onExit: (reactFindDOMNode) => unit=?,
      ~onExited: (reactFindDOMNode) => unit=?,
      ~onExiting: (reactFindDOMNode) => unit=?,

      ~timeout: int=?,
      ~transitionAppear: bool=?,
      ~unmountOnExit: bool=?,
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
    ) =>
    React.element =
    "Slide";
};

module Transition = {
  [@bs.module "rsuite"] [@bs.scope "Animation"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,

      ~enteredClassName: string=?,
      ~enteringClassName: string=?,
      ~exitedClassName: string=?,
      ~exitingClassName: string=?,
      ~_in: bool=?,
      // todo: different signatures off repo / off docs
      ~onEnter: (reactFindDOMNode) => unit=?,
      ~onEntered: (reactFindDOMNode) => unit=?,
      ~onEntering: (reactFindDOMNode) => unit=?,

      ~onExit: (reactFindDOMNode) => unit=?,
      ~onExited: (reactFindDOMNode) => unit=?,
      ~onExiting: (reactFindDOMNode) => unit=?,

      ~timeout: int=?,
      ~transitionAppear: bool=?,
      ~unmountOnExit: bool=?
    ) =>
    React.element =
    "Transition";
};

