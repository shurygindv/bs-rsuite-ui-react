
type dataItemType = {
    value: string,
    label: React.element,
    children: list(dataItemType),
    groupBy: string
  };
  
  [@bs.module "rsuite"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~menuStyle: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~childrenKey: string=?,
      ~appearance: [@bs.string] [
        | `default
        | `subtle
      ]=?,
      ~classPrefix: string=?,
      ~block: bool=?,
      ~cascade: bool=?,
      ~countable: bool=?,
      ~cleanable: bool=?,
      ~disabled: bool=?,
      ~searchable: bool=?,
      ~virtualized: bool=?,
      ~preventOverflow: bool=?,
      ~container: Dom.element=?, // TODO
      ~data: list(dataItemType)=?,
      ~uncheckableItemValues: list(string)=?,
      ~defaultValue: string=?,
      ~defaultExpandAll: bool=?,
      ~defaultExpandItemValues: string=?,
      ~disabledItemValues: list(string)=?,
      ~expandItemValues: list(string)=?, // TODO
      ~labelKey: string=?,
      ~height: int=?,
      ~value: list(string)=?,
      ~valueKey: string=?,
      ~menuClassName: string=?,
      ~onExpand: (list(string), dataItemType) => unit=?, // TODO: misunderstanding
      ~onClose: unit => unit=?,
      ~onChange: (list(string), ReactEvent.Synthetic.t) => unit=?,
      ~onOpen: unit => unit=?,
      ~onSearch: (string, ReactEvent.Form.t) => unit=?,
      ~onSelect: (dataItemType, string, ReactEvent.Synthetic.t) => unit=?,
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
      ~renderTreeIcon: (list(int)) => React.element=?, // TODO: check
      ~renderTreeNode: (list(dataItemType)) => React.element=?,
      ~renderValue: (list(string), dataItemType, React.element) => React.element=?,
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
  