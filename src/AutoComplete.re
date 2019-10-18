[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~data: array(dateItemType), //  // todo: research bs.obj label data does not support [@bs.unwrap] 
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
