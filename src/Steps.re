[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~current: int=?,
    ~currentStatus: [@bs.string] [
                  | `finish
                  | `wait
                  | `process
                  | `error
    ]=?,
    ~small: bool=?,
    ~vertical: bool=?
  ) =>
  React.element =
  "Steps";

module Item = {
  [@bs.module "rsuite"] [@bs.scope "Steps"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~description: React.element=?,
      ~icon: React.element=?,
      ~title: React.element=?,
      ~status: [@bs.string] [
                  | `finish
                  | `wait
                  | `process
                  | `error
        ]=?,
    ) =>
    React.element =
    "Item";
};
