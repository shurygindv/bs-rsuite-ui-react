[@bs.module "rsuite"]
[@react.component]
external make: (
  ~style: ReactDOMRe.Style.t=?,
  ~children: React.element=?,
  ~classPrefix: string=?,
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
  ~buttonComponentClass: unit => React.element=?,
) => React.element = "Pagination";
