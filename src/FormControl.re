

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
    ~checkTrigger:  [
                  | `change
                  | `blur
                  | `none
                ]
     =?,
     ~errorMessage: React.element=?,
     ~placement:  [
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
    ~_type:  [ | `text | `password | `number | `checkbox | `tel | `hidden  | `date | `color | `email | `time ]=?,
  ) =>
  React.element =
  "FormControl";
