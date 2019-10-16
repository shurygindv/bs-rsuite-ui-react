module Props = {
    [@bs.deriving abstract]
    type t = {
      title: React.element,
      description: React.element,
      [@bs.optional]
      duration: int, 
      [@bs.optional]
      placement: string,
      [@bs.optional]
      top: int,
      [@bs.optional]
      bottom: int,
      [@bs.optional]
      key: string,
      [@bs.optional]
      onClose: unit => unit
    };
  
    let make = t;
  }
  
  [@bs.module "rsuite"] [@bs.scope "Notification"]
  external _open : Props.t => unit = "open";
  
  [@bs.module "rsuite"] [@bs.scope "Notification"]
  external info : Props.t => unit = "info";
  
  [@bs.module "rsuite"] [@bs.scope "Notification"]
  external success : Props.t => unit = "success";
  
  [@bs.module "rsuite"] [@bs.scope "Notification"]
  external warning : Props.t => unit = "warning";
  
  [@bs.module "rsuite"] [@bs.scope "Notification"]
  external error : Props.t => unit = "error";
  
  [@bs.module "rsuite"] [@bs.scope "Notification"]
  external close: (
    ~key: string=?,
  ) => unit = "closeAll";
  
  [@bs.module "rsuite"] [@bs.scope "Notification"]
  external closeAll : unit => unit = "closeAll";
  