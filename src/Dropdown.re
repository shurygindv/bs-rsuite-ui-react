[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,

    ~menuStyle: ReactDOMRe.Style.t=?,
    ~activeKey: string=?,
    ~eventKey: string=?,
    ~onClose: unit => unit=?,
    ~onOpen: unit => unit=?,
    ~icon: React.element=?,
    ~onSelect: (string, ReactEvent.Synthetic.t) => unit=?,
    ~onToggle: bool => unit=?,
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
                  =?,
    ~renderTitle: React.element => React.element=?,
    ~title: React.element=?,
    ~toggleClassName: string=?,
    ~toggleComponentClass: unit => React.element=?,
    ~trigger: [@bs.string] [
                | `click
                | `hover
                | `contextMenu //   TODO
              ]
                =?
  ) =>
  React.element =
  "Dropdown";

module Item = {
  [@bs.module "rsuite"] [@bs.scope "Dropdown"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,

      ~active: bool=?,
      ~disabled: bool=?,
      ~divider: bool=?,
      ~panel: bool=?,
      ~eventKey: string=?,
      ~href: string=?, // if you use componentClass as Link
      ~icon: React.element=?,
      ~componentClass: 'a => React.element=?,
      ~onSelect: (string, ReactEvent.Synthetic.t) => unit=?
    ) =>
    React.element =
    "Item";
};

module Menu = {
  [@bs.module "rsuite"] [@bs.scope "Dropdown"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,
      
      ~title: string=?,
      ~pullLeft: bool=?,
      ~icon: React.element=?
    ) =>
    React.element =
    "Menu";
};
