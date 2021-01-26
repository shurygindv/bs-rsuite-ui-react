module Line = {
  [@bs.module "rsuite"] [@bs.scope "Progress"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,
      ~percent: int=?,
      ~showInfo: bool=?,
      ~strokeWidth: int=?,
      ~strokeColor: string=?,
      ~status:  [ | `active | `fail | `success]=?
    ) =>
    React.element =
    "Line";
};

module Circle = {
  [@bs.module "rsuite"] [@bs.scope "Progress"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,
      
      ~percent: int=?,
      ~showInfo: bool=?,
      ~strokeWidth: int=?,
      ~strokeColor: string=?,
      /* gapDegree: ???=?, */
      ~strokeLinecap:  [ | `round | `square | `butt]=?,
      ~gapPosition:  [ | `right | `left | `top | `bottom]=?,
      ~trailColor: string=?,
      ~trailWidth: int=?,
      ~status:  [ | `active | `fail | `success]=?
    ) =>
    React.element =
    "Circle";
};
