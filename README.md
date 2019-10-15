# ReasonML bindings for  [Rsuite UI React library](https://rsuitejs.com)

p.s A work in active progress!

## Installation

**I**. Add `bs-rsuite-ui-react` bindings as dependency 

```
yarn add "https://github.com/shurygindv/bs-rsuite-ui-react.git"
```

**II**. Also we need to say `bsb`: heey, look! Seems, `bs-rsuite-ui-react` perfectly complements you, let's add it to `bs-dependencies

`...somewhere in your bsconfig.json: `
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

TODO

## Contributions

It would be great! 
Make our world better!
All contributions are welcomed.

## FAQ (just to save time...)

**1**. How can we pass `Component` as prop?
 - Put it in a separate function
 - See: https://github.com/reasonml/reason-react/blob/master/docs/component-as-prop.md

**2**. What the different between ReasonReact.string and React.string?
- They are the same (aliases)
- See: https://github.com/reasonml/reason-react/issues/406 comments

**3**. How can we pass string as prop?

- Use `React.string("example")` instead `"example"`

**4**. What `type__` mean as `Component` prop?

- `type` is reserved in Reason/Ocaml,
- See: https://bucklescript.github.io/docs/en/object
and https://github.com/reasonml/reason-react/issues/475

`...to be continued`

And many other useful details about Reason React here!
  See: https://github.com/reasonml/reason-react/tree/master/docs
  
  
**Good luck!** 🙂 
