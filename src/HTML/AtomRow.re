let component = ReasonReact.statelessComponent("AtomRow");

let rowStyle = ReactDOMRe.Style.make(~display="flex", ~flexDirection="row", ());

let cellStyle = ReactDOMRe.Style.make(~flex="1 1 0", ());

let make = (~row: DomainRow.t, _) => {
  ...component,
  render: _ => {
    let (a, b, c, d, e, f, g, h, i) = row;
    <div style=rowStyle>
      <div style=cellStyle> <AtomCell cell=a /> </div>
      <div style=cellStyle> <AtomCell cell=b /> </div>
      <div style=cellStyle> <AtomCell cell=c /> </div>
      <div style=cellStyle> <AtomCell cell=d /> </div>
      <div style=cellStyle> <AtomCell cell=e /> </div>
      <div style=cellStyle> <AtomCell cell=f /> </div>
      <div style=cellStyle> <AtomCell cell=g /> </div>
      <div style=cellStyle> <AtomCell cell=h /> </div>
      <div style=cellStyle> <AtomCell cell=i /> </div>
    </div>;
  },
};