[@bs.module "rsuite"]
[@react.component]
external make: (
  ~children: React.element=?,
  ~container: Dom.element=?,
  ~onRendered: unit =>unit=?,
) => React.element = "Portal";
