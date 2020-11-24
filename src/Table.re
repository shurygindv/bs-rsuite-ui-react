[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~data: array('a),

    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    
    ~width: int=?,
    ~height: int=?,
    ~autoHeight: bool=?,
    ~minHeight: int=?,
    ~rowHeight: int=?,
    ~rowClassName: string=?, // TODO: or ((rowData: RowData) => string);
    ~headerHeight: int=?,
    ~rowKey: string=?, // TODO: obj
    ~isTree: bool=?,
    ~defaultExpandAllRows: bool=?,
    ~defaultExpandedRowKeys: array('a)=?,
    ~expandedRowKeys: array('a)=?,
    ~rowExpandedHeight: int=?,
    ~sortColumn: string=?,
    ~sortType: [@bs.string] [ | `desc | `asc]=?,
    ~defaultSortType: [@bs.string] [ | `desc | `asc]=?,
    ~loading: bool=?,
    ~bordered: bool=?,
    ~cellBordered: bool=?,
    ~hover: bool=?,
    ~wordWrap: bool=?,
    ~bodyRef: ReactDOMRe.Ref.t=?,
    ~showHeader: bool=?,
    ~setRowHeight: Js.Dict.t('a) => int=?,
    ~onRowClick: (Js.Dict.t('a), ReactEvent.Synthetic.t) => unit=?,
    ~onScroll: (int, int) => unit=?,
    ~onSortColumn: (string, [ | `desc | `asc]) => unit=?, // TODO: stringify 2n arg
    ~onExpandChange: (bool, Js.Dict.t('a)) => unit=?,
    ~renderTreeToggle: (React.element, Js.Dict.t('a)) => React.element=?,
    ~renderRowExpanded: Js.Dict.t('a) => React.element=?,
    ~renderEmpty: React.element => React.element=?,
    ~renderLoading: React.element => React.element=?,
    ~shouldUpdateScroll: bool=?,
  ) =>
  React.element =
  "Table";

module Column = {
  [@bs.module "rsuite"] [@bs.scope "Table"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,

      ~align: [@bs.string] [ | `left | `center | `right]=?,
      ~colSpan: int=?,
      ~fixed: [@bs.string] [ | `left | `right]=?, // TODO: +bool type
      ~flexGrow: int=?,
      ~minWidth: int=?,
      ~onResize: (Js.undefined(int), Js.undefined(string)) => unit=?,
      ~resizable: bool=?,
      ~sortable: bool=?,
      ~verticalAlign: [@bs.string] [ | `top | `middle | `bottom]=?,
      ~width: int=?
    ) =>
    React.element =
    "Column";
};

module Cell = {
  [@bs.module "rsuite"] [@bs.scope "Table"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,
      ~dataKey: string=?,
      ~rowData: Js.Dict.t('a)=?,
      ~rowIndex: int=?
    ) =>
    React.element =
    "Cell";
};

module Pagination = {
  [@bs.module "rsuite"] [@bs.scope "Table"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,

      ~activePage: int=?,
      ~disabled: bool=?, // TODO: or (eventKey: any) => bool,
      ~displayLength: int=?,
      ~first: bool=?,
      ~last: bool=?,
      ~lengthMenu: array(RsuiteTypes.MenuItem.t)=?,
      ~maxButtons: int=?,
      ~next: bool=?,
      ~onChangeLength: int => unit=?,
      ~onChangePage: int => unit=?,
      ~prev: bool=?,
      ~renderLengthMenu: React.element => React.element=?,
      ~renderTotal: (int, int) => React.element=?,
      ~reverse: bool=?,
      ~showInfo: bool=?,
      ~showLengthMenu: bool=?,
      ~total: int=?
    ) =>
    React.element =
    "Pagination";
};

module HeaderCell = {
  [@bs.module "rsuite"] [@bs.scope "Table"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?
    ) =>
    React.element =
    "HeaderCell";
};
