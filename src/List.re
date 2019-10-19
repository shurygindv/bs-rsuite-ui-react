type payloadCallback = (RsuiteTypes.ListPayload.t, ReactEvent.Mouse.t) => unit;

[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~bordered: bool=?,
    ~hover: bool=?,
    ~sortable: bool=?,
    ~size: [@bs.string] [ | `lg | `md | `sm]=?,
    ~autoScroll: bool=?,
    ~pressDelay: int=?,
    ~transitionDuration: int=?,
    ~onSortStart: payloadCallback=?,
    ~onSortMove: payloadCallback=?,
    ~onSortEnd: payloadCallback=?,
    ~onSort: payloadCallback=?
  ) =>
  React.element =
  "List";

module Item = {
  [@bs.module "rsuite"] [@bs.scope "List"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,

      ~index: int=?,
      ~collection: string=?, // TODO: or number
      ~disabled: bool=?
    ) =>
    React.element =
    "Item";
};
