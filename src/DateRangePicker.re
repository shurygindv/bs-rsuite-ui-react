

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
    ~cleanable: bool=?,
    ~container: Dom.htmlElement=?, // TODO or unit => Dom.htmlElement,
    ~defaultOpen: bool=?,
    ~defaultValue: array(Js.Date.t)=?,
    ~defaultCalendarValue: array(Js.Date.t)=?,
    ~disabled: bool=?,
    ~disabledDate: (
      Js.Date.t,
      array(Js.Date.t),
      bool,
      string // TODO +unions: 'CALENDAR', 'TOOLBAR...
    ) => bool=?,
    ~hoverRange: [@bs.string] [
      | `week
      | `month
    ]=?, // TODO: or  (date: Date)=> Array<Date>
    ~isoWeek: bool=?,
    ~limitEndYear: int=?,
    ~onChange: (array(Js.Date.t)) => unit=?,
    ~onClean: (ReactEvent.Synthetic.t) => unit=?,
    ~onClose: unit => unit=?,
    ~onOk: (array(Js.Date.t), ReactEvent.Synthetic.t) => unit=?,
    ~onOpen: unit => unit=?,
    ~onSelect: (Js.Date.t) => unit=?,
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
    ~size: [@bs.string] [
      | `lg
      | `md
      | `sm
      | `xs
    ]=?,
    ~toggleComponentClass: unit => React.element=?,
    ~value: array(Js.Date.t)=?
  ) =>
    React.element =
    "DateRangePicker";
