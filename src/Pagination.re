[@bs.module "rsuite"]
[@react.component]
external make: (
  ~style: ReactDOMRe.Style.t=?,
  ~children: React.element=?,
  ~classPrefix: string=?,
  ~className: string=?,
  ~_as: string,
  
  ~activePage: int=?,
  ~maxButtons: int=?,
  ~pages: int=?,
  ~boundaryLinks: bool=?,
  ~disabled: bool=?,
  ~ellipsis: bool=?,
  ~first: bool=?,
  ~last: bool=?,
  ~next: bool=?,
  ~prev: bool=?,
  ~onSelect: (int, ReactEvent.Mouse.t) => unit=?,
) => React.element = "Pagination";