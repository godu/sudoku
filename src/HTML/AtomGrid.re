let component = ReasonReact.statelessComponent("AtomGrid");

let gridStyle =
  ReactDOMRe.Style.make(
    ~display="flex",
    ~flexDirection="column",
    ~height="100%",
    ~width="100%",
    (),
  );

let rowStyle = ReactDOMRe.Style.make(~flex="auto 1 1", ());

let make = (~grid: DomainGrid.t, _) => {
  ...component,
  render: _ => {
    let (a, b, c, d, e, f, g, h, i) = grid;
    <div style=gridStyle>
      <div style=rowStyle> <AtomRow row=a /> </div>
      <div style=rowStyle> <AtomRow row=b /> </div>
      <div style=rowStyle> <AtomRow row=c /> </div>
      <div style=rowStyle> <AtomRow row=d /> </div>
      <div style=rowStyle> <AtomRow row=e /> </div>
      <div style=rowStyle> <AtomRow row=f /> </div>
      <div style=rowStyle> <AtomRow row=g /> </div>
      <div style=rowStyle> <AtomRow row=h /> </div>
      <div style=rowStyle> <AtomRow row=i /> </div>
    </div>;
  },
};