module Config = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      top: int,
      [@bs.optional]
      duration: int,
      [@bs.optional]
      getContainer: unit => Dom.htmlElement,
    };
  
    type make = t;
  };
  
  [@bs.module "rsuite"] [@bs.scope "Alert"]
  external info:
    (
       ~content: string,
       ~duration: int=?, 
       ~onClose: unit => unit=?,
       unit
    ) => unit = "info";
  
  [@bs.module "rsuite"] [@bs.scope "Alert"]
  external success:
    (
      ~content: string,
      ~duration: int=?,
      ~onClose: unit => unit=?,
      unit,
    ) => unit = "success";
  
  [@bs.module "rsuite"] [@bs.scope "Alert"]
  external error:
    (
      ~content: string, 
      ~duration: int=?, 
      ~onClose: unit => unit=?,
      unit
    ) => unit = "error";
  
  [@bs.module "rsuite"] [@bs.scope "Alert"]
  external config: Config.t => unit = "config";
  
  [@bs.module "rsuite"] [@bs.scope "Alert"]
  external closeAll: unit => unit = "closeAll";
  
  [@bs.module "rsuite"] [@bs.scope "Alert"]
  external close: unit => unit = "close";