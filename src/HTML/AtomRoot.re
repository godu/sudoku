let component = ReasonReact.statelessComponent("AtomRoot");

let make = (children) => {
  ...component,
  render: _ => <div> children </div>,
};