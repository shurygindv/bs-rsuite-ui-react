

[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~name: string,

    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    ~componentClass: string=?,
    ~pattern: string=?,
    ~required: bool=?,

    ~rows: int=?,    
    ~accepter: unit => React.element=?,
    ~checkTrigger: [@bs.string] [
                  | `change
                  | `blur
                  | `none
                ]
     =?,
     ~errorMessage: React.element=?,
     ~placement: [@bs.string] [
      | `left
      | `leftStart
      | `leftEnd
  
      | `right
      | `rightStart
      | `rightEnd
  
      | `top
      | `topStart
      | `topEnd
  
      | `bottom
      | `bottomStart
      | `bottomEnd
    ]=?,
    ~readonly: bool=?,
    ~plaintext: bool=?,
    ~_type: [@bs.string] [ | `text | `password | `number | `checkbox | `tel | `hidden  | `date | `color | `email | `time ]=?,
  ) =>
  React.element =
  "FormControl";
