
  // https://github.com/rsuite/dom-lib/blob/master/src

  // classes
  [@bs.module "rsuite"] [@bs.scope "DOMHelper"]
  external hasClass: (
    Dom.element,
    string
  ) => bool = "hasClass";

  
  [@bs.module "rsuite"] [@bs.scope "DOMHelper"]
  external addClass: (
    Dom.element,
    string
  ) => Dom.element = "addClass";
  
  [@bs.module "rsuite"] [@bs.scope "DOMHelper"]
  external removeClass: (
    Dom.element,
    string
  ) => Dom.element = "removeClass";
  
    
  [@bs.module "rsuite"] [@bs.scope "DOMHelper"]
  external toggleClass: (
    Dom.element,
    string
  ) => Dom.element = "toggleClass";
  

  // styles

  [@bs.module "rsuite"] [@bs.scope "DOMHelper"]
  external getStyle: (
    Dom.element
  ) => ReactDOMRe.Style.t = "getStyle";
  

  [@bs.module "rsuite"] [@bs.scope "DOMHelper"]
  external getStyleValue: (
    Dom.element,
    string
  ) => string = "getStyle";
  

  [@bs.module "rsuite"] [@bs.scope "DOMHelper"]
  external addStyle: (
    Dom.element,
    ReactDOMRe.Style.t
  ) => unit = "addStyle";

  [@bs.module "rsuite"] [@bs.scope "DOMHelper"]
  external addExactStyle: (
    Dom.element,
    string,
    string,
  ) => unit = "addStyle";

  [@bs.module "rsuite"] [@bs.scope "DOMHelper"]
  external removeStyle: (
    Dom.element,
    string
  ) => unit = "removeStyle";

  [@bs.module "rsuite"] [@bs.scope "DOMHelper"]
  external removeStyles: (
    Dom.element,
    array(string)
  ) => unit = "removeStyle";

  [@bs.module "rsuite"] [@bs.scope "DOMHelper"]
  external translateDOMPositionXY: (
    ReactDOMRe.Style.t,
    int,
    int,
  ) => unit = "translateDOMPositionXY";

  // events

  [@bs.module "rsuite"] [@bs.scope "DOMHelper"]
  external on: (
    ~target: Dom.element,
    ~eventName: string,
    ~listener: ('a) => unit,
    ~capture: bool=?,
    unit
  ) => unit = "on";

  [@bs.module "rsuite"] [@bs.scope "DOMHelper"]
  external off: (
    ~target: Dom.element,
    ~eventName: string,
    ~listener: ('a) => unit,
    ~capture: bool=?,
    unit
  ) => unit = "on";
  

// query

[@bs.module "rsuite"] [@bs.scope "DOMHelper"]
external activeElement: (unit) => unit = "activeElement";

[@bs.module "rsuite"] [@bs.scope "DOMHelper"]
external getHeight: (
  ~node: Dom.element,
  ~client: Dom.element=?,
) => int = "getHeight";


[@bs.module "rsuite"] [@bs.scope "DOMHelper"]
external getWidth: (
  ~node: Dom.element,
  ~client: Dom.element=?,
) => int = "getWidth";


[@bs.module "rsuite"] [@bs.scope "DOMHelper"]
external getOffset: (
  Dom.element,
) => 'a = "getOffset"; // todo: exact return type

[@bs.module "rsuite"] [@bs.scope "DOMHelper"]
external getOffsetParent: (
  Dom.element,
) => Dom.element = "getOffsetParent";


[@bs.module "rsuite"] [@bs.scope "DOMHelper"]
external getPosition: (
  ~node: Dom.element,
  ~offsetParent: Dom.element=?,
) => Dom.element = "getPosition";

[@bs.module "rsuite"] [@bs.scope "DOMHelper"]
external getWindow: (
  Dom.element
) => Dom.window = "getWindow";



[@bs.module "rsuite"] [@bs.scope "DOMHelper"]
external nodeName: (
  Dom.element
) => string = "nodeName";


[@bs.module "rsuite"] [@bs.scope "DOMHelper"]
external ownerDocument: (
  Dom.element
) => Dom.document = "ownerDocument";

[@bs.module "rsuite"] [@bs.scope "DOMHelper"]
external ownerWindow: (
  Dom.element
) => Dom.window = "ownerWindow";


[@bs.module "rsuite"] [@bs.scope "DOMHelper"]
external contains: (
  Dom.element,
  Dom.element
) => bool = "contains";

[@bs.module "rsuite"] [@bs.scope "DOMHelper"]
external scrollLeft: (
  ~node: Dom.element,
  ~_val: int=?,
  unit
) => int = "scrollLeft";

[@bs.module "rsuite"] [@bs.scope "DOMHelper"]
external scrollTop: (
  ~node: Dom.element,
  ~_val: int=?,
  unit
) => int = "scrollTop";