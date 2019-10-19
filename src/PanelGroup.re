[@bs.module "rsuite"]
[@react.component]
external make: (
  ~style: ReactDOMRe.Style.t=?,
  ~children: React.element=?,
  ~classPrefix: string=?,
  ~className: string=?,
  
  ~activeKey: string=?,
  ~accordion: bool=?,
  ~defaultActiveKey: string=?,
  ~onSelect: (string, ReactEvent.Synthetic.t) => unit=?,
) => React.element = "PanelGroup";
