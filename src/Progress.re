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
      ~status: [@bs.string] [ | `active | `fail | `success]=?
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
      ~strokeLinecap: [@bs.string] [ | `round | `square | `butt]=?,
      ~gapPosition: [@bs.string] [ | `right | `left | `top | `bottom]=?,
      ~trailColor: string=?,
      ~trailWidth: int=?,
      ~status: [@bs.string] [ | `active | `fail | `success]=?
    ) =>
    React.element =
    "Circle";
};
