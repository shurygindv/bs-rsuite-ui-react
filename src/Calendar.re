
[@bs.module "rsuite"] [@react.component]
external make: (
  ~style: ReactDOMRe.Style.t=?,
  ~children: React.element=?,
  
  ~bordered: bool=?,
  ~compact: bool=?,
  ~defaultValue: Js.Date.t=?,
  ~isoWeek: bool=?,
  ~onChange: Js.Date.t => unit=?,
  ~onSelect: Js.Date.t => unit=?,
  ~renderCell: Js.Date.t => React.element=?,
  ~value: Js.Date.t=?,
) => React.element = "Calendar";
