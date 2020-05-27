[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~data: array(RsuiteTypes.DataItemType.t),

    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,

    ~defaultValue: string=?,
    ~disabled: bool=?,
    ~onChange: (string, ReactEvent.Synthetic.t) => unit=?,
    ~onClose: unit => unit=?,
    ~onSelect: (RsuiteTypes.DataItemType.t, ReactEvent.Synthetic.t) => unit=?,
    ~placeholder: React.element=?,
    ~renderItem: (React.element, RsuiteTypes.DataItemType.t) => React.element=?,
    ~selectOnEnter: bool=?,
    ~value: string=?,
  ) =>
  React.element =
  "AutoComplete";
