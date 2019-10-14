# ReasonML bindings for  [Rsuite UI React library](https://rsuitejs.com)

p.s A work in active progress!

## Installation

I. Add `bs-rsuite-ui-react` bindings as dependency 

```
yarn add "https://github.com/shurygindv/bs-rsuite-ui-react.git"
```

II. We need to say `bsb`, heey, look! Seems,  `bs-rsuite-ui-react` is your dependency, let's add it to `bs-dependencies` in your `bsconfig.json`.

```reason
  ... 
      "bs-dependencies": [
        "reason-react",
        ...,
        "bs-rsuite-ui-react"
    ],
  ...
```


III. We would be to see a sea of colors, sky and sun, there are two ways to achieve it:

as LESS

```reason
[%bs.raw {|require('rsuite/lib/styles/index.less')|}];
```

or plain CSS

```reason
[%bs.raw {|require('rsuite/dist/styles/rsuite-default.css')|}];
```

## Usage

TODO