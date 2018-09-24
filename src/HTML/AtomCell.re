open DomainCell;

let component = ReasonReact.statelessComponent("AtomCell");

let string_of_value = (value: value) =>
  switch (value) {
  | One => "1"
  | Two => "2"
  | Three => "3"
  | Four => "4"
  | Five => "5"
  | Six => "6"
  | Seven => "7"
  | Eight => "8"
  | Nine => "9"
  };

let style = ReactDOMRe.Style.make(~textAlign="center", ());

let make = (~cell, _) => {
  ...component,
  render: _ =>
    <div style>
      <span>
        {
          switch (cell) {
          | Value(value) => value |> string_of_value |> ReasonReact.string
          | Empty => ReasonReact.null
          }
        }
      </span>
    </div>,
};