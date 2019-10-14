module Paragraph = {
    [@bs.module "rsuite"] [@bs.scope "Placeholder"] [@react.component]
    external make:
      (
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
        ~width: int=?,
        ~height: int=?,
        ~active: bool=?
      ) =>
      React.element =
      "Graph";
  };