
[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~data: array(RsuiteTypes.DataItemType.t),

    ~children: React.element=?,
    ~style: ReactDOMRe.Style.t=?,
    ~classPrefix: string=?,
    ~className: string=?,

    ~childrenKey: string=?,
    ~defaultExpandAll: bool=?,
    ~defaultExpandItemValues: array(string)=?,
    ~defaultValue: string=?,
    ~disabledItemValues: array(string)=?,
    ~expandItemValues: array(string)=?,
    ~height: int=?,
    ~labelKey: string=?,

    ~onChange: (string) => unit=?,
    ~onExpand: (
      array(string), 
      RsuiteTypes.DataItemType.t,
      ('a, React.element) => array('a)
    ) => unit=?,

    ~onSelect: (RsuiteTypes.DataItemType.t, ReactEvent.Synthetic.t) => unit=?,
    ~renderTreeNode: (RsuiteTypes.DataItemType.t) => React.element=?,
    ~renderTreeIcon: (RsuiteTypes.DataItemType.t) => React.element=?,
    
    /* not documented yet prop in off doc
    ~onSearch: (string, ReactEvent.Keyboard.t) => unit=?,
    ~onClean: (ReactEvent.Synthetic.t) => unit=?,
    */

    ~searchKeyword: string=?,
    ~value: string=?,
    ~valueKey: string=?,
    ~virtualized: bool=?,
  ) =>
  React.element =
  "Tree";