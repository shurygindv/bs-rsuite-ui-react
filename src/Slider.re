[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~barClassName: string=?,
    ~defaultValue: int=?,
    ~disabled: bool=?,
    ~graduated: bool=?,

    ~handleClassName: string=?,
    ~handleStyle: ReactDOMRe.Style.t=?,
    ~handleTitle: React.element=?,

    ~max: int=?,
    ~min: int=?,

    ~onChange: int => unit=?,
    ~progress: bool=?,
    ~renderMark: int => React.element=?,
    ~step: int=?,
    ~tooltip: bool=?,
    ~value: int=?,
    ~vertical: bool=?,
  ) =>
  React.element =
  "Slider";

