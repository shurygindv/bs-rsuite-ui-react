
[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~data: array(RsuiteTypes.DataItemType.t),

    ~children: React.element=?,
    ~style: ReactDOMRe.Style.t=?,
    ~classPrefix: string=?,
    ~className: string=?,

    ~cascade: bool=?,
    ~childKey: string=?,
    ~defaultExpandAll: bool=?,
    ~defaultExpandItemValues: array(string)=?,
    ~defaultValue: array(string)=?,
    ~disabledItemValues: array(string)=?,
    ~expandItemValues: array(string)=?,
    ~height: int=?,
    ~labelKey: string=?,

    ~onChange: (array(string)) => unit=?,
    ~onExpand: (
      array(string), 
      RsuiteTypes.DataItemType.t,
      ('a, React.element) => array('a)
    ) => unit=?,

    ~onSelect: (RsuiteTypes.DataItemType.t, string, ReactEvent.Synthetic.t) => unit=?,
    ~renderTreeNode: (RsuiteTypes.DataItemType.t) => React.element=?,
    ~renderTreeIcon: (RsuiteTypes.DataItemType.t) => React.element=?,
    
    ~searchKeyword: string=?,
    ~uncheckableItemValues: array(string)=?,
    ~value: array(string)=?,
    ~valueKey: string=?,
    ~virtualized: bool=?,
  ) =>
  React.element =
  "CheckTree";