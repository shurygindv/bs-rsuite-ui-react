# ReasonML bindings for  [Rsuite UI React library](https://rsuitejs.com)

[![npm version](https://badge.fury.io/js/%40sdv-studio%2Fbs-rsuite-ui-react.svg)](https://badge.fury.io/js/%40sdv-studio%2Fbs-rsuite-ui-react)

 [Official overview](https://rsuitejs.com/en/components/overview) (bindings according it)
 
 p.s bindings from an enthusiast 🙂 


## Plans

1. Cover all components **in progress**
2. Avoid type duplications, create common.re module for types (to reuse)
3. Check and fix some to-do`s


## Roadmap

✅ = done<br>
🌓 = not full support (temp) <br>
🛑 = unimplemented<br>


|   Type         | Component                           | Status  | 
|   :-:          | ------------------------------------|   :-:  |
|  General       | `<Button />`; `<ButtonGroup />`     |   ✅   |
|  General       | `<Icon />`; `<IconButton />`        |   ✅   |
|  General       | `<Tooltip />`                       |   ✅   |
|  General       | `<Popover />;<Whisper />`           |   ✅   |
|  General       | `Alert module`                      |   ✅   |
|  General       | `Notification module`               |   ✅   |
|  General       | `<Message />`                       |   ✅   |
|  General       | `<Loader />`                        |   ✅   |
|  General       | `<Modal />`                         |   ✅   |
|  General       | `<Drawer />`                        |   ✅   |
|  General       | `<Alert />`                         |   ✅   |
|  General       | `<Divider />`                       |   ✅   |
|  General       | `<Progress />`                      |   ✅   |
|  General       | `<Placeholder />`                   |   ✅   |
|   :-:          | ------------------------------------|        |
|  Navigation    | `<Dropdown />`                      |   ✅   |
|  Navigation    | `<Nav />`                           |   ✅   |
|  Navigation    | `<Navbar />`                        |   ✅   |
|  Navigation    | `<Sidenav />`                       |   ✅   |
|  Navigation    | `<Steps />`                         |   ✅   |
|  Navigation    | `<Pagination />`                    |   ✅   |
|  Navigation    | `<Breadcrumb />`                    |   ✅   |
|   :-:          | ------------------------------------|   :-:  |
|  Data Entry    | `<Form />`                          |   🌓   |
|  Data Entry    | `<ControlLabel />`                  |   ✅   |
|  Data Entry    | `<FormGroup />`                     |   ✅   |
|  Data Entry    | `<FormControl />`                   |   ✅   |
|  Data Entry    | `<HelpBlock />`                     |   ✅   |
|  Data Entry    | `<Checkbox />`                      |   ✅   |
|  Data Entry    | `<Radio />`; `<RadioGroup />`       |   ✅   |
|  Data Entry    | `<Input />`                         |   ✅   |
|  Data Entry    | `<InputNumber />`                   |   ✅   |
|  Data Entry    | `<AutoComplete />`                  |   ✅   |
|  Data Entry    | `<Toggle />`                        |   ✅   |
|  Data Entry    | `<InputPicker />`                   |   ✅   |
|  Data Entry    | `<TagPicker />`                     |   ✅   |
|  Data Entry    | `<SelectPicker />`                  |   ✅   |
|  Data Entry    | `<CheckPicker />`                   |   ✅   |
|  Data Entry    | `<Toggle />`                        |   ✅   |
|  Data Entry    | `<TreePicker />`                    |   ✅   |
|  Data Entry    | `<CheckTreePicker />`               |   ✅   |
|  Data Entry    | `<Cascader />`                      |   ✅   |
|  Data Entry    | `<MultiCascader />`                 |   ✅   |
|  Data Entry    | `<DatePicker />`                    |   ✅   |
|  Data Entry    | `<DateRangePicker />`               |   ✅   |
|  Data Entry    | `<Slider />`                        |   ✅   |
|  Data Entry    | `<Uploader />`                      |   ✅   |
|     :-:        | ------------------------------------|   :-:   |
|  Data Display  | `<Avatar />`                        |   ✅   |
|  Data Display  | `<Badge />`                         |   ✅   |
|  Data Display  | `<Table />` + Cell/Column/Header    |   ✅   |
|  Data Display  | `<Tree />`                          |   🛑   |
|  Data Display  | `<CheckTree />`                     |   🛑   |
|  Data Display  | `<Panel />`                         |   ✅   |
|  Data Display  | `<Timeline />`                      |   ✅   |
|  Data Display  | `<Tag />;<TagGroup/>`               |   ✅   |
|  Data Display  | `<List />`                          |   ✅   |
|  Data Display  | `<Calendar />`                      |   ✅   |
|   :-:          | ------------------------------------|   :-:   |
|  Layout        | `<Grid />`; `<Row />`; `<Col />`    |   ✅   |
|  Layout        | `<FlexboxGrid />`                   |   ✅   |
|  Layout        | `<Container />`                     |   ✅   |
|   :-:          | ------------------------------------|   :-:   |
|  Utils         | `<Animation />`                     |   🛑   |
|  Utils         | `<Portal />`                        |   ✅   |

## Installation

**I**. Add `bs-rsuite-ui-react` binding as dependency 

```
yarn add "https://github.com/shurygindv/bs-rsuite-ui-react.git"
or
yarn add @sdv-studio/bs-rsuite-ui-react
```

**II**. Also we need to say `bsb`: heey, look! Seems, `bs-rsuite-ui-react` perfectly complements you, let's add it to `bs-dependencies

`...somewhere in your bsconfig.json: `
```reason
  ... 
      "bs-dependencies": [
        "reason-react",
        ...,
        "@sdv-studio/bs-rsuite-ui-react"
    ],
  ...
```


**III**. We would be to see a sea of colors, sky and sun, there are two ways to achieve it, import:

`LESS`

```reason
[%bs.raw {|require('rsuite/lib/styles/index.less')|}];
```

or as plain `CSS`

```reason
[%bs.raw {|require('rsuite/dist/styles/rsuite-default.css')|}];
```

## Usage

All bindings are in `RsuiteUi` namespace, let's try! Some **examples**

**Notification**

```reason 
 RsuiteUi.Notification._open(props); // props is RsuiteUi.Notification.Props.t
 RsuiteUi.Notification.closeAll();
 
 RsuiteUi.Notification.success(RsuiteUi.Notification.Props.make(
   ~title = React.string("I'm title"),
   ~description = React.string("I'm desc"),
   ()
 ));
```

**CheckPicker**

```reason 
 let item = RsuiteUi.RsuiteTypes.DataItemType.make(
  ~value = "value",
  ~label = React.string("value"),
  ()
 );
 
 <RsuiteUi.CheckPicker data={[|item|]]} />
```


**Modal**

```reason 
  <RsuiteUi.Modal show={true}>
      <RsuiteUi.Modal.Header>
         {React.string("Header")}
      </RsuiteUi.Modal.Header>
      
       <RsuiteUi.Modal.Title>
         {React.string("Title")}
      </RsuiteUi.Modal.Title>
      
       <RsuiteUi.Modal.Body>
        {React.string("Body")}
      </RsuiteUi.Modal.Body>
      
      <RsuiteUi.Modal.Footer>
       {React.string("Footer")}
      </RsuiteUi.Modal.Footer>
  </RsuiteUi.Modal>
```

## Caveats

**I**. Next components: `<MultiCascader />`, `<Cascader />`, `<DatePicker />`, `Notification module` have **_open** prop instead **open**

**Example:**

```reason 
  <MultiCascader _open={true} />
  <Cascader _open={true} />
  <DatePicker _open={true} />
   
   
   Notification._open(...); // instead Notification.open()
```

**II**. Similar situation with `<FlexboxGrid />`; Sometimes we would be to use prop `justify` with **end** value, but we should use **end_** instead
 
**Example**

```reason 
  <FlexboxGrid justify=`end_ />
  <FlexboxGrid justify=`spaceAround />
  <FlexboxGrid justify=`center />
```


## Contributions

It would be great, make our world better!
All contributions are welcomed.

## FAQ (just to save time...)

**1**. How can we pass `Component` as prop?
 - Put it in a separate function
 - See: https://github.com/reasonml/reason-react/blob/master/docs/component-as-prop.md

**2**. What the different between `ReasonReact.string` and `React.string`?
- They are the same (aliases), prefer `React.string`
- See: https://github.com/reasonml/reason-react/issues/406 comments

**3**. How can we pass string as child?

- Use `React.string("example")` instead `"example"`

**4**. What `_type`, `_open` mean as `Component` prop?

- `type` / `open` is reserved in Reason/Ocaml,
- See: https://bucklescript.github.io/docs/en/object
and https://github.com/reasonml/reason-react/issues/475


And many other useful details about Reason React here!
  See: https://github.com/reasonml/reason-react/tree/master/docs
  
  
**Good luck!** 🙂 
