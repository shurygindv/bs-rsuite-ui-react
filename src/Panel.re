[@bs.module "rsuite"]
[@react.component]
external make: (
  ~style: ReactDOMRe.Style.t=?,
  ~children: React.element=?,
  ~classPrefix: string=?,
  ~className: string=?,
  
  ~bodyFill: bool=?,
  ~bordered: bool=?,
  ~collapsible: bool=?,
  ~defaultExpanded: bool=?,
  ~expanded: bool=?,
  ~header: React.element=?,
  ~id: string=?,
  ~eventKey: string=?,
) => React.element = "Panel";
