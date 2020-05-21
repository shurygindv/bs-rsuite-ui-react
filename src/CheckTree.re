
[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~data: list(RsuiteTypes.DataItemType.t),

    ~children: React.element=?,
    ~style: ReactDOMRe.Style.t=?,
    ~classPrefix: string=?,
    ~className: string=?,

    ~cascade: bool=?,
    ~childKey: string=?,
    ~defaultExpandAll: bool=?,
    ~defaultExpandItemValues: list(string)=?,
    ~defaultValue: list(string)=?,
    ~disabledItemValues: list(string)=?,
    ~expandItemValues: list(string)=?,
    ~height: int=?,
    ~labelKey: string=?,

    ~onChange: (list(string)) => unit=?,
    ~onExpand: (
      list(string), 
      RsuiteTypes.DataItemType.t,
      ('a, React.element) => array('a)
    ) => unit=?,

    ~onSelect: (RsuiteTypes.DataItemType.t, string, ReactEvent.Synthetic.t) => unit=?,
    ~renderTreeNode: (RsuiteTypes.DataItemType.t) => React.element=?,
    ~renderTreeIcon: (RsuiteTypes.DataItemType.t) => React.element=?,
    
    ~searchKeyword: string=?,
    ~uncheckableItemValues: list(string)=?,
    ~value: list(string)=?,
    ~valueKey: string=?,
    ~virtualized: bool=?,
  ) =>
  React.element =
  "CheckTree";