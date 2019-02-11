let str = ReasonReact.string;
let component = ReasonReact.statelessComponent("App");

module Dragons = [%graphql
  {|
  query Dragons {
    dragons {
      id
      name
      species
      breed
    }
  }
|}
];

module DragonsQuery = ReasonApollo.CreateQuery(Dragons);

let make = _children => {
  ...component,
  render: _self => {
    let dragonsQuery = Dragons.make();
    <div> 
      <h2> {"ReasonML + ReasonReact + GraphQL" |> str} </h2>
      <DragonsQuery variables=dragonsQuery##variables>
        ...{
         ({result}) =>
           switch (result) {
           | Loading => <div> {"Loading dragons!" |> str} </div>
           | Error(error) => <div> {error##message |> str} </div>
           | Data(data) => <DragonList items=data##dragons />
           }
         }
      </DragonsQuery>
    </div>
  }
};