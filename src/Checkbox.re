[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~name: string=?,
    ~title: string=?,
    ~value: string=?,
    ~checked: int=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~indeterminate: bool=?,
    ~inline: bool=?,
    ~onChange: (string, bool, ReactEvent.Synthetic.t) => unit=?
  ) =>
  React.element =
  "Checkbox";
