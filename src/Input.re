[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~id: string =?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~defaultValue: int=?,
    ~value: string=?,
    ~disabled: bool=?,
    ~_type: [@bs.string] [ | `text]=?,
    ~size: [@bs.string] [ | `lg | `md | `sm | `xs]=?,
    ~inputRef: ReactDOMRe.Ref.t=?,

    ~onPressEnter: ReactEvent.Keyboard.t => unit=?,
    ~onChange: (string, ReactEvent.Synthetic.t) => unit=?,
  ) =>
  React.element =
  "Input";
