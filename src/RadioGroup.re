[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~appearance: [@bs.string] [
      | `default
      | `picker
    ]=?,
    ~defaultValue: string=?,
    ~inline: bool=?,
    ~name: string=?,
    ~value: string=?,
    ~onChange: (string, ReactEvent.Synthetic.t) => unit=?,
  ) =>
  React.element =
  "RadioGroup";