[@bs.module "rsuite"]
[@react.component]
external make: (
  ~style: ReactDOMRe.Style.t=?,
  ~children: React.element=?,
  ~classPrefix: string=?,
  ~className: string=?,
  
  ~closable: bool=?,
  ~color: string=?,
  ~onClose: (ReactEvent.Synthetic.t) => unit=?,
  ~componentClass: unit => React.element=?,
) => React.element = "Tag";
