[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,

    ~componentClass: 'a=> React.element=?,

    ~lg: int=?,
    ~lgHidden: int=?,
    ~lgOffset: int=?,
    ~lgPull: int=?,
    ~lgPush: int=?,

    ~md: int=?,
    ~mdHidden: int=?,
    ~mdOffset: int=?,
    ~mdPull: int=?,
    ~mdPush: int=?,

    ~sm: int=?,
    ~smHidden: int=?,
    ~smOffset: int=?,
    ~smPull: int=?,
    ~smPush: int=?,

    ~xs: int=?,
    ~xsHidden: int=?,
    ~xsOffset: int=?,
    ~xsPull: int=?,
    ~xsPush: int=?
  ) =>
  React.element =
  "Col";

