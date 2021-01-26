
[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    ~action: string=?,
    ~name: string=?,
    ~acceptCharset: string=?,
    ~autocomplete:  [
      | `on
      | `off
    ]=?,
    ~method:  [
      | `get
      | `post
    ]=?,
    ~target:  [
      | `_blank
      | `_self
      | `_parent
      | `_top
    ]=?,

    ~checkDelay: int=?,
    ~checkTrigger:  [
      | `change
      | `blur
      | `none
    ]=?,
    ~errorFromContext: bool=?,
    ~fluid: bool=?,
    ~layout:  [
      | `horizontal
      | `vertical
      | `inline
    ]=?,

    ~formError: 'a=?,
    ~formDefaultValue: 'a=?,
    ~formValue: 'a=?,
    ~onChange: ('a) => unit=?,
    ~onSubmit: (ReactEvent.Form.t) => unit=?,
    ~onCheck: ('a, 'b) => unit=?,
    ~onError: ('a) => unit=?,
    /* todo
      ~model: Schema=?,
    */
  ) =>
  React.element =
  "Form";
