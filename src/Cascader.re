
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
      ~_open: bool=?,
      ~preventOverflow: bool=?,
      ~container: Dom.element=?, // TODO
      ~data: list(dataItemType)=?,
      ~defaultValue: string=?,
      ~defaultOpen: bool=?,
      ~disabledItemValues: string=?,
      ~labelKey: string=?,
      ~value: string=?,
      ~menuHeight: int=?,
      ~menuWidth: int=?,
      ~valueKey: string=?,
      ~onClose: unit => unit=?,
      ~onChange: (string, ReactEvent.Synthetic.t) => unit=?,
      ~onOpen: unit => unit=?,
      ~onSearch: (string, ReactEvent.Form.t) => unit=?,
      ~onSelect: (dataItemType, list(string), ReactEvent.Synthetic.t) => unit=?, // TODO
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
      ~renderMenu: React.element => React.element=?, // TODO: check `Object type
      ~renderMenuItem: (React.element, dataItemType) => React.element=?,
      ~renderValue: (string, list(string), React.element) => React.element=?,
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
    "Cascader";
  