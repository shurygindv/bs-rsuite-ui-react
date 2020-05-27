
  [@bs.module "rsuite"] [@react.component]
  external make:
    (
      ~data: array(RsuiteTypes.DataItemType.t),

      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,

      ~menuStyle: ReactDOMRe.Style.t=?,
      ~childrenKey: string=?,
      ~appearance: [@bs.string] [
        | `default
        | `subtle
      ]=?,
      ~cacheData: array(RsuiteTypes.DataItemType.t)=?,
      ~block: bool=?,
      ~cleanable: bool=?,
      ~disabled: bool=?,
      ~searchable: bool=?,
      ~virtualized: bool=?,
      ~_open: bool=?,
      ~preventOverflow: bool=?,
      ~container: Dom.element=?, // TODO
      ~defaultValue: string=?,
      ~defaultExpandAll: bool=?,
      ~defaultExpandItemValues: string=?,
      ~defaultOpen: bool=?,
      ~disabledItemValues: string=?,
      ~groupBy: string=?,
      ~expandItemValues: string=?,
      ~labelKey: string=?,
      ~value: string=?,
      ~height: int=?,
      ~valueKey: string=?,
      ~menuClassName: string=?,
      ~maxHeight: int=?,
      ~onExpand: (array(string), RsuiteTypes.DataItemType.t) => unit=?, // TODO: misunderstanding
      ~onClose: unit => unit=?,
      ~onChange: (string, ReactEvent.Synthetic.t) => unit=?,
      ~onOpen: unit => unit=?,
      ~onSearch: (string, ReactEvent.Form.t) => unit=?,
      ~onSelect: (RsuiteTypes.DataItemType.t, string, ReactEvent.Synthetic.t) => unit=?,
      ~onClean: (ReactEvent.Synthetic.t) => unit=?,
      ~onGroupTitleClick: (ReactEvent.Synthetic.t) => unit=?,
      ~placeholder: React.element=?,
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
    "TreePicker";
  