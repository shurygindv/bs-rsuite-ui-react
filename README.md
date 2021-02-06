# ReasonML bindings for [Rsuite UI React library](https://rsuitejs.com)

[![npm version](https://badge.fury.io/js/bs-rsuite-ui-react.svg)](https://badge.fury.io/js/bs-rsuite-ui-react)
![bs rsuite ui CI](https://github.com/shurygindv/bs-rsuite-ui-react/workflows/bs%20rsuite%20ui%20CI/badge.svg)

[Official overview](https://rsuitejs.com/en/components/overview) (bindings according it)

p.s bindings from an enthusiast 🙂

<sub><b>Deprecated: ~~https://www.npmjs.com/package/@sdv-studio/bs-rsuite-ui-react~~</b></sub>

<sub><b>use</b> `npm i bs-rsuite-ui-react` instead `npm i @sdv-studio/bs-rsuite-ui-react`</sub>

## Plans

1. Cover all documented components ✅
2. Compare with official GitHub repo
3. Check TODOs, fixes ⌛
4. [Example project](https://github.com/shurygindv/vote-system-frontend) ✅
5. Improve DX (reuse, variants instead string as possible and etc.) ⌛
6. Tests, codegen

## Roadmap

✅ = done<br>
🌓 = not full support (temp) <br>
🛑 = unimplemented<br>

|     Type     | Component                            | Status |
| :----------: | ------------------------------------ | :----: |
|   General    | `<Button />`; `<ButtonGroup />`      |   ✅   |
|   General    | `<Icon />`; `<IconButton />`         |   ✅   |
|   General    | `<Tooltip />`                        |   ✅   |
|   General    | `<Popover />;<Whisper />`            |   ✅   |
|   General    | `Alert module`                       |   ✅   |
|   General    | `Notification module`                |   ✅   |
|   General    | `<Message />`                        |   ✅   |
|   General    | `<Loader />`                         |   ✅   |
|   General    | `<Modal />`                          |   ✅   |
|   General    | `<Drawer />`                         |   ✅   |
|   General    | `<Alert />`                          |   ✅   |
|   General    | `<Divider />`                        |   ✅   |
|   General    | `<Progress />`                       |   ✅   |
|   General    | `<Placeholder />`                    |   ✅   |
|     :-:      | ------------------------------------ |        |
|  Navigation  | `<Dropdown />`                       |   ✅   |
|  Navigation  | `<Nav />`                            |   ✅   |
|  Navigation  | `<Navbar />`                         |   ✅   |
|  Navigation  | `<Sidenav />`                        |   ✅   |
|  Navigation  | `<Steps />`                          |   ✅   |
|  Navigation  | `<Pagination />`                     |   ✅   |
|  Navigation  | `<Breadcrumb />`                     |   ✅   |
|     :-:      | ------------------------------------ |  :-:   |
|  Data Entry  | `<Form />`                           |   🌓   |
|  Data Entry  | `<ControlLabel />`                   |   ✅   |
|  Data Entry  | `<FormGroup />`                      |   ✅   |
|  Data Entry  | `<FormControl />`                    |   ✅   |
|  Data Entry  | `<HelpBlock />`                      |   ✅   |
|  Data Entry  | `<Checkbox />`                       |   ✅   |
|  Data Entry  | `<Radio />`; `<RadioGroup />`        |   ✅   |
|  Data Entry  | `<Input />`                          |   ✅   |
|  Data Entry  | `<InputNumber />`                    |   ✅   |
|  Data Entry  | `<AutoComplete />`                   |   ✅   |
|  Data Entry  | `<Toggle />`                         |   ✅   |
|  Data Entry  | `<InputPicker />`                    |   ✅   |
|  Data Entry  | `<TagPicker />`                      |   ✅   |
|  Data Entry  | `<SelectPicker />`                   |   ✅   |
|  Data Entry  | `<CheckPicker />`                    |   ✅   |
|  Data Entry  | `<Toggle />`                         |   ✅   |
|  Data Entry  | `<TreePicker />`                     |   ✅   |
|  Data Entry  | `<CheckTreePicker />`                |   ✅   |
|  Data Entry  | `<Cascader />`                       |   ✅   |
|  Data Entry  | `<MultiCascader />`                  |   ✅   |
|  Data Entry  | `<DatePicker />`                     |   ✅   |
|  Data Entry  | `<DateRangePicker />`                |   ✅   |
|  Data Entry  | `<Slider />`                         |   ✅   |
|  Data Entry  | `<Uploader />`                       |   ✅   |
|     :-:      | ------------------------------------ |  :-:   |
| Data Display | `<Avatar />`                         |   ✅   |
| Data Display | `<Badge />`                          |   ✅   |
| Data Display | `<Table />` + Cell/Column/Header     |   ✅   |
| Data Display | `<Tree />`                           |   ✅   |
| Data Display | `<CheckTree />`                      |   ✅   |
| Data Display | `<Panel />`                          |   ✅   |
| Data Display | `<Timeline />`                       |   ✅   |
| Data Display | `<Tag />;<TagGroup/>`                |   ✅   |
| Data Display | `<List />`                           |   ✅   |
| Data Display | `<Calendar />`                       |   ✅   |
| Data Display | `<Carousel />`                       |   ✅   |
|     :-:      | ------------------------------------ |  :-:   |
|    Layout    | `<Grid />`; `<Row />`; `<Col />`     |   ✅   |
|    Layout    | `<FlexboxGrid />`                    |   ✅   |
|    Layout    | `<Container />`                      |   ✅   |
|     :-:      | ------------------------------------ |  :-:   |
|    Utils     | `<Animation />`                      |   ✅   |
|    Utils     | `<Portal />`                         |   ✅   |
|    Utils     | `Schema module`                      |   🛑   |
|    Utils     | `DOMHelper module`                   |   ✅   |
|     :-:      | ------------------------------------ |  :-:   |
| Undocumented | `<SafeAnchor />`                     |   ✅   |

## Installation

**I**. Add `bs-rsuite-ui-react` binding as dependency

```
npm i bs-rsuite-ui-react
or
yarn add bs-rsuite-ui-react
or
yarn add "https://github.com/shurygindv/bs-rsuite-ui-react.git"
```

**II**. Also we need to say `bsb`: heey, look! Seems, `bs-rsuite-ui-react` perfectly complements you, let's add it to `bs-dependencies`

`...somewhere in your bsconfig.json:`

```reason
  ...
      "bs-dependencies": [
        "reason-react",
        ...,
        "bs-rsuite-ui-react"
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
   ~placement="bottomStart",
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

 <RsuiteUi.CheckPicker data={[|item|]} />
```

**Animation**

```reason
  let (isVisible, setVisibility) = React.useState(_ => false);

  React.useEffect0(_ => {
    Js.Global.setTimeout(_ => {
      setVisibility(_ => true);
    }, 200);
    None
  });

  <RsuiteUi.Animation.Bounce
    _in={isVisible}
  >
    <div>
      {React.string("look at me")}
    </div>
  </RsuiteUi.Animation.Bounce>
```

**Table**

```reason
  let items = [|{
    "name": "some name",
    "description": "some description"
  }, {
    "name": "some name",
    "description": "some description"
  }|];

  // where `dataKey` is keyof items (<Table.Cell dataKey={..}>)
  RsuiteUi.(
      <Table
          height={420}
          data={items}
          onSortColumn={(sortColumn, _sortType) => {
            Js.log(sortColumn);
          }}
        >
          <Table.Column width={50} align=`center>
            <Table.HeaderCell>
              {React.string("Name")}
            </Table.HeaderCell>

            <Table.Cell dataKey="name" />
          </Table.Column>

          <Table.Column width={100} flexGrow={2}>
            <Table.HeaderCell>
               {React.string("Description")}
            </Table.HeaderCell>

            <Table.Cell dataKey="description" />
          </Table.Column>
      </Table>
    );
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

**I**. Next components: `<MultiCascader />`, `<Cascader />`, `<DatePicker />`, `Notification module` have **\_open** prop instead **open**

**Example:**

```reason
  <MultiCascader _open={true} />
  <Cascader _open={true} />
  <DatePicker _open={true} />


   Notification._open(...); // instead Notification.open()
```

**II**. **\_in** instead **in** prop

```reason
   <RsuiteUi.Animation.Bounce _in={isVisible} />

   <RsuiteUi.Animation.Transition _in={isVisible} />

   <RsuiteUi.Animation.Slide _in={isVisible} />
```

**III**. Similar situation with `<FlexboxGrid />`; Sometimes we would be to use prop `justify` with **end** value, but we should use **end\_** instead

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

**4**. What `_type`, `_open`, `_val`, `_in` mean as `Component` prop?

- are reserved in Reason/Ocaml (aliases `type`, `open` and so on),
- See: https://bucklescript.github.io/docs/en/object
  and https://github.com/reasonml/reason-react/issues/475

**5**. Why do we use an array structure instead of a immutable list everywhere?

- ReasonML lists are represented as nested 2-element arrays in JavaScript (an encoding of cons pairs).

And many other useful details about Reason React here!
See: https://github.com/reasonml/reason-react/tree/master/docs

**Good luck!** 🙂
