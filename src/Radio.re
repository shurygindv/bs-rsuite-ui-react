[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~checked: bool=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~inline: bool=?,
    ~name: string=?,
    ~title: string=?,
    ~value: string=?,
    ~inputRef: ReactDOMRe.Ref.t=?,
    ~onChange: (string, bool, ReactEvent.Synthetic.t) => unit=?,
  ) =>
  React.element =
  "Radio";