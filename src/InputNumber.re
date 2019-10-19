[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~disabled: bool=?,
    ~defaultValue: int=?,
    ~max: int=?,
    ~min: int=?,
    ~step: int=?,
    ~value: int=?,
    ~postfix: React.element=?,
    ~prefix: React.element=?,
    ~onChange: (int, ReactEvent.Synthetic.t) => unit=?,
    ~size: [@bs.string] [ | `lg | `md | `sm | `xs]=?
  ) =>
  React.element =
  "InputNumber";
