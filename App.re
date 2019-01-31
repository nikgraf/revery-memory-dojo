open Revery;
open Revery.Core;
open Revery.Math;
open Revery.UI;
open Revery.UI.Components;

let init = app => {
  let win = App.createWindow(app, "Memory");

  let containerStyle =
    Style.[
      position(`Absolute),
      justifyContent(`Center),
      alignItems(`Center),
      bottom(0),
      top(0),
      left(0),
      right(0),
    ];

  let textStyle = Style.[
    color(Colors.black),
    fontFamily("canada1500-rg.ttf"),
    fontSize(24)
  ];

  let render = () => <View style=containerStyle> <Text style=textStyle text="Hello World" /> </View>;

  UI.start(win, render);
};

App.start(init);
