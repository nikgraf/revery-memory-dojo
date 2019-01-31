# Revery Memory Dojo

## Instructions

### Setup

Install all the depedencies using

```
esy install
```

Build and run the application a first time:

```
esy build
esy run
```

> **NOTE:** The first build will take a while. Subsequent builds will be fast.

The result should be the a native application starts showing "Hello World".

### Creating a Component

1. As a first step create a component `Game` inside `App.re` and extract the text "Hello World" into this component.
2. Extract the component into a separe `Game.re`.

### Initialize a Game and render the Cards

1. Use the `Memory.generateCards();` to create an initial set of cards.
2. Create a `Card` component in a separate file.
3. Map over your set of cards and render a black box for each of the cards.

_HINT_ Just render them in a row using `flexDirection(`Row)`

### Improve the Card

1. Create a mapping between the `card.value` and a color set of your choice.

_HINT_ Revery ships with a Colors module.

2. Allow to pass in a `color` prop and render the card in the provided color.

_HINT_ Use `~color as c` as color is part of a revery module.

3. Allow to pass in a `visible` prop and render render the color only when set to visible. In case `visible` is set to `false` render a white card.

_HINT_ Revery ships with a Colors module.
_HINT_ Modify the `generateCards` function to have visible and non-visible card.

### Make it interactive

1. Move the initial cards into a state or reducer hook.

_HINT_ For example `React.Hooks.state(initialCards, slots)`

2. Implement an `onClick` prop on the Card component. Whenever the card is flipped log it in the Terminal.

3. Instead of logging now flip the card using `Memory.flipCard` and update your cards state.

### Polishing

1. Use the `Grid` component from the solution to create 2 rows of 4 cards.

## License

[MIT License](LICENSE)
