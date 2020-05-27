
[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~appearance: [@bs.string] [
      | `default
      | `subtle
    ]=?,
    ~block: bool=?,
    ~calendarDefaultValue: Js.Date.t=?,
    ~cleanable: bool=?,
    ~container: Dom.htmlElement=?, // TODO or unit => Dom.htmlElement,
    ~defaultOpen: bool=?,
    ~defaultValue: Js.Date.t=?,
    ~disabled: bool=?,
    ~disabledDate: (Js.Date.t) => bool=?,
    ~disabledHours: (int, Js.Date.t) => bool=?,
    ~disabledMinutes: (int, Js.Date.t) => bool=?,
    ~disabledSeconds: (int, Js.Date.t) => bool=?,
    ~format: string=?,
    ~hideHours: (int, Js.Date.t) => bool=?,
    ~hideMinutes: (int, Js.Date.t) => bool=?,
    ~hideSeconds: (int, Js.Date.t) => bool=?,
    ~inline: bool=?,
    ~isoWeek: bool=?,
    ~limitEndYear: int=?,
    ~locale: RsuiteTypes.Locale.t=?,

    ~onChange: (Js.Date.t) => unit=?,
    ~onChangeCalendarDate: (Js.Date.t, ReactEvent.Synthetic.t) => unit=?,
    ~onClean: (ReactEvent.Synthetic.t) => unit=?,
    ~onClose: unit => unit=?,
    ~onNextMonth: (Js.Date.t) => unit=?,
    ~onOk: (Js.Date.t, ReactEvent.Synthetic.t) => unit=?,
    ~onOpen: unit => unit=?,
    ~onPrevMonth: (Js.Date.t) => unit=?,
    ~onSelect: (Js.Date.t) => unit=?,
    ~onToggleMonthDropdown: (bool) => unit=?,
    ~onToggleTimeDropdown: (bool) => unit=?,
    ~oneTap: bool=?,
    ~_open: bool=?,
    ~placeholder: string=?,
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
    ~preventOverflow: bool=?,
    ~ranges: array(RsuiteTypes.Range.t)=?,
    ~showWeekNumbers: bool=?,
    ~toggleComponentClass: unit => React.element=?,
    ~value: Js.Date.t=?
  ) =>
    React.element =
    "DatePicker";
