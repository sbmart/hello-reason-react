let component = ReasonReact.statelessComponent("Greeting");

/* underscores before names indicate unused variables. We name them for clarity */
// https://reasonml.github.io/reason-react/docs/en/creation-props-self

let make = (~name, _children) => {
  ...component,
  render: (_self) => <div> {ReasonReact.string("Hello " ++ name ++ "!")} </div>
};
