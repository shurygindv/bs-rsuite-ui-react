
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
    ]=?,

    ~formError: 'a=?,
    ~formDefaultValue: 'a=?,
    ~formValue: 'a=?,
    ~onChange: ('a) => unit=?,
    ~onCheck: ('a, 'b) => unit=?,
    ~onError: ('a) => unit=?,
    /* todo
      ~model: Schema=?,
    */
  ) =>
  React.element =
  "Form";
