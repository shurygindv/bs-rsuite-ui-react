
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
      ~cacheData: list(dataItemType)=?,
      ~classPrefix: string=?,
      ~block: bool=?,
      ~cleanable: bool=?,
      ~disabled: bool=?,
      ~searchable: bool=?,
      ~virtualized: bool=?,
      ~_open: bool=?,
      ~preventOverflow: bool=?,
      ~container: Dom.element=?, // TODO
      ~data: list(dataItemType)=?,
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
      ~onExpand: (list(string), dataItemType) => unit=?, // TODO: misunderstanding
      ~onClose: unit => unit=?,
      ~onChange: (string, ReactEvent.Synthetic.t) => unit=?,
      ~onOpen: unit => unit=?,
      ~onSearch: (string, ReactEvent.Form.t) => unit=?,
      ~onSelect: (dataItemType, string, ReactEvent.Synthetic.t) => unit=?,
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
      ~renderMenuGroup: (React.element, dataItemType) => React.element=?,
      ~renderMenuItem: (React.element, dataItemType) => React.element=?,
      ~renderValue: (string, dataItemType, React.element) => React.element=?,
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
  