open Random;

let randomCell = (state: State.t): DomainCell.t =>
  DomainCell.(
    switch (State.int(state, 10)) {
    | 1 => One|.Value
    | 2 => Two|.Value
    | 3 => Three|.Value
    | 4 => Four|.Value
    | 5 => Five|.Value
    | 6 => Six|.Value
    | 7 => Seven|.Value
    | 8 => Eight|.Value
    | 9 => Nine|.Value
    | _ => Empty
    }
  );

let randomRow = (state: State.t): DomainRow.t => (
  randomCell(state),
  randomCell(state),
  randomCell(state),
  randomCell(state),
  randomCell(state),
  randomCell(state),
  randomCell(state),
  randomCell(state),
  randomCell(state),
);
let randomGrid = (state: State.t): DomainGrid.t => (
  randomRow(state),
  randomRow(state),
  randomRow(state),
  randomRow(state),
  randomRow(state),
  randomRow(state),
  randomRow(state),
  randomRow(state),
  randomRow(state),
);

let state = State.make([|2|]);
ReactDOMRe.renderToElementWithId(
  ReasonReact.element(AtomRoot.make(<AtomGrid grid={randomGrid(state)} />)),
  "index",
);

%raw
"
if (module.hot) {
module.hot.accept();
}
";