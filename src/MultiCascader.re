
  
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
      ~_open: bool=?,
      ~preventOverflow: bool=?,
      ~container: Dom.element=?, // TODO
      ~defaultValue: string=?,
      ~defaultOpen: bool=?,
      ~disabledItemValues: string=?,
      ~uncheckableItemValues: array(string)=?,
      ~labelKey: string=?,
      ~value: string=?,
      ~menuHeight: int=?,
      ~menuWidth: int=?,
      ~height: int=?,
      ~valueKey: string=?,
      ~onClose: unit => unit=?,
      ~onChange: (array(string), ReactEvent.Synthetic.t) => unit=?,
      ~onOpen: unit => unit=?,
      ~onSearch: (string, ReactEvent.Form.t) => unit=?,
      ~onSelect: (RsuiteTypes.DataItemType.t, array(string), ReactEvent.Synthetic.t) => unit=?, // TODO
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
      ~renderMenu: (array(string), React.element, Dom.element) => React.element=?, // TODO: check `Object type
      ~renderMenuItem: (React.element, RsuiteTypes.DataItemType.t) => React.element=?,
      ~renderValue: (string, array(string), React.element) => React.element=?,
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
    "MultiCascader";
  