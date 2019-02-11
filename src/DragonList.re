open Dragon;

let str = ReasonReact.string;
let component = ReasonReact.statelessComponent("DragonList");

let make = (~items, _children) => {
  ...component,
  render: _self =>
    <ul style={ReactDOMRe.Style.make(~listStyleType="none", ())}>
      {
        items
        |> Array.map(dragonFromJs)
        |> Array.map(item =>
             <li key={item.id}>
                <label htmlFor={item.id}>
                  {item.name ++ " | " ++ item.species ++ " | " ++ item.breed |> str}
                </label>
             </li>
           )
        |> ReasonReact.array
      }
    </ul>,
};