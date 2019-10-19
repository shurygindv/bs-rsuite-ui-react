[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?
  ) =>
  React.element =
  "Placeholder";

module Paragraph = {
  [@bs.module "rsuite"] [@bs.scope "Placeholder"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,
      ~rows: int=?,
      ~rowHeight: int=?,
      ~rowMargin: int=?,
      ~graph: [@bs.string] [ | `circle | `square]=?,
      ~active: bool=?
    ) =>
    React.element =
    "Paragraph";
};

module Grid = {
  [@bs.module "rsuite"] [@bs.scope "Placeholder"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,
      ~rows: int=?,
      ~rowHeight: int=?,
      ~rowMargin: int=?,
      ~columns: int=?,
      ~active: bool=?
    ) =>
    React.element =
    "Grid";
};

module Graph = {
  [@bs.module "rsuite"] [@bs.scope "Placeholder"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,
      ~width: int=?,
      ~height: int=?,
      ~active: bool=?
    ) =>
    React.element =
    "Graph";
};
