
  
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
      ~block: bool=?,
      ~cascade: bool=?,
      ~countable: bool=?,
      ~cleanable: bool=?,
      ~disabled: bool=?,
      ~searchable: bool=?,
      ~virtualized: bool=?,
      ~preventOverflow: bool=?,
      ~container: Dom.element=?, // TODO
      ~uncheckableItemValues: array(string)=?,
      ~defaultValue: string=?,
      ~defaultExpandAll: bool=?,
      ~defaultExpandItemValues: string=?,
      ~disabledItemValues: array(string)=?,
      ~expandItemValues: array(string)=?, // TODO
      ~labelKey: string=?,
      ~height: int=?,
      ~value: array(string)=?,
      ~valueKey: string=?,
      ~menuClassName: string=?,
      ~onExpand: (array(string), RsuiteTypes.DataItemType.t) => unit=?, // TODO: misunderstanding
      ~onClose: unit => unit=?,
      ~onChange: (array(string), ReactEvent.Synthetic.t) => unit=?,
      ~onOpen: unit => unit=?,
      ~onSearch: (string, ReactEvent.Form.t) => unit=?,
      ~onSelect: (RsuiteTypes.DataItemType.t, string, ReactEvent.Synthetic.t) => unit=?,
      ~onClean: (ReactEvent.Synthetic.t) => unit=?,
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
      ~renderTreeIcon: (array(int)) => React.element=?, // TODO: check
      ~renderTreeNode: (array(RsuiteTypes.DataItemType.t)) => React.element=?,
      ~renderValue: (array(string), RsuiteTypes.DataItemType.t, React.element) => React.element=?,
      ~renderExtraFooter: unit => React.element=?,
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
    "CheckTreePicker";
  