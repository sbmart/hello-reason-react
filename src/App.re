let str = ReasonReact.string;
let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self => 
    <div> 
      <h2> {"ReasonML + ReasonReact + GraphQL" |> str} </h2>
    </div>
};