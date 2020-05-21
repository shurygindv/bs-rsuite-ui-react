
module Type = {
  type t = [
     | `text 
     | `password 
     | `number 
     | `checkbox 
     | `tel 
     | `hidden  
     | `date 
     | `color 
     | `email 
     | `time 
    ];
}
module Size = {
  type t = [ | `lg | `md | `sm | `xs];
};

[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~id: string =?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    ~placeholder: string=?,
    ~pattern: string=?,
    ~required: bool=?,
    
    ~defaultValue: int=?,
    ~value: string=?,
    ~disabled: bool=?,
    ~_type: [@bs.string] [ | `text | `password | `number | `checkbox | `tel | `hidden  | `date | `color | `email | `time ]=?,
    ~size: [@bs.string] [ | `lg | `md | `sm | `xs]=?,
    ~inputRef: ReactDOMRe.Ref.t=?,

    ~onPressEnter: ReactEvent.Keyboard.t => unit=?,
    ~onChange: (string, ReactEvent.Synthetic.t) => unit=?,
    ~onFocus: (ReactEvent.Synthetic.t) => unit=?,
    ~onBlur: (ReactEvent.Synthetic.t) => unit=?,
    ~onClick: (ReactEvent.Mouse.t) => unit=?,
  ) =>
  React.element =
  "Input";
