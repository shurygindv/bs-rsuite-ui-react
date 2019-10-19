
[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~checkDelay: int=?,
    ~checkTrigger: [@bs.string] [
      | `change
      | `blur
      | `none
    ]=?,
    ~errorFromContext: bool=?,
    ~fluid: bool=?,
    ~layout: [@bs.string] [
      | `horizontal
      | `vertical
      | `inline
    ]
    /* todo
    ~formDefaultValue: object=?,
    ~formError=?,
    ~formValue=?,
    ~model: Schema=?,
    ~onChange: 	(formValue:Object, event:Object)=>unit=?,
    ~onCheck: 	(formValue:Object)=>unit=?,
    ~onError: 	(formValue:Object)=>unit=?,

    */
=?,
  ) =>
  React.element =
  "Form";
