[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~active: bool=?,
    ~disabled: bool=?,
    ~loading: bool=?,
    ~block: bool=?,
    ~href: string=?,
    ~componentClass: unit => React.element=?,
    ~appearance: [@bs.string] [
                   | `primary
                   | `link
                   | `subtle
                   | `default
                   | `ghost
                 ]
                   =?,
    ~color: [@bs.string] [
              | `red
              | `orange
              | `yellow
              | `green
              | `cyan
              | `blue
              | `violet
            ]
              =?,
    ~size: [@bs.string] [ | `lg | `md | `sm | `xs]=?
  ) =>
  React.element =
  "Button";
