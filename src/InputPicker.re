
  
  [@bs.module "rsuite"] [@react.component]
  external make:
    (
      ~data: array(RsuiteTypes.DataItemType.t),

      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,

      ~menuStyle: ReactDOMRe.Style.t=?,
      ~block: bool=?,
      ~cleanable: bool=?,
      ~container: Dom.element=?, // TODO
      ~creatable: bool=?,
      ~disabled: bool=?,
      ~preventOverflow: bool=?,
      ~searchable: bool=?,
      ~defaultValue: string=?,
      ~disabledItemValues: string=?,
      ~groupBy: string=?,
      ~labelKey: string=?,
      ~value: string=?,
      ~valueKey: string=?,
      ~menuClassName: string=?,
      ~maxHeight: int=?,
      ~onChange: (string, ReactEvent.Synthetic.t) => unit=?,
      ~onOpen: unit => unit=?,
      ~onClose: unit => unit=?,
      ~onSearch: (string, ReactEvent.Form.t) => unit=?,
      ~onSelect: (string, RsuiteTypes.DataItemType.t, ReactEvent.Synthetic.t) => unit=?,
      ~onClean: (ReactEvent.Synthetic.t) => unit=?,
      ~onGroupTitleClick: (ReactEvent.Synthetic.t) => unit=?,
      ~placeholder: React.element=?,
      ~renderMenu: React.element => React.element=?,
      ~renderMenuGroup: (React.element, RsuiteTypes.DataItemType.t) => React.element=?,
      ~renderMenuItem: (React.element, RsuiteTypes.DataItemType.t) => React.element=?,
      ~renderValue: (string, RsuiteTypes.DataItemType.t, React.element) => React.element=?,
      ~renderExtraFooter: unit => React.element=?,
      ~sort: bool => (string, string) => int=?, // TODO
      ~toggleComponentClass: unit => React.element=?,
      ~size: [@bs.string] [
                    | `lg
                    | `md
                    | `sm
                    | `xs
                  ]
       =?,
    ) =>
    React.element =
    "InputPicker";
  