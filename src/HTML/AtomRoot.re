let component = ReasonReact.statelessComponent("Atomroot");

let container =
  ReactDOMRe.Style.make(
    ~display="grid",
    ~height="100%",
    (),
  );
let content =
  ReactDOMRe.Style.make(
    ~margin="auto",
    ~width="100vmin",
    ~minWidth="320px",
    ~height="100vmin",
    ~minHeight="320px",
    (),
  );

let make = children => {
  ...component,
  render: _self =>
    <div style=container>
      <span style=content>
        <Fragment> ...children </Fragment> 
      </span>
    </div>,
};