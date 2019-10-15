[@bs.module "rsuite"]
[@react.component]
external make: (
  ~children: React.element=?,
  ~style: ReactDOMRe.Style.t=?,
  ~defaultValue: list(string)=?,
  ~name: string=?,
  ~value: string=?,
  ~inline: bool=?,
  ~onChange: (string, ReactEvent.Synthetic.t) => unit=?,
) => React.element = "CheckboxGroup";
