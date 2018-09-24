open DomainCell;

type t = (
  DomainCell.t,
  DomainCell.t,
  DomainCell.t,
  DomainCell.t,
  DomainCell.t,
  DomainCell.t,
  DomainCell.t,
  DomainCell.t,
  DomainCell.t,
);

let perfectRow: t = (
  Value(One),
  Value(Two),
  Value(Three),
  Value(Four),
  Value(Five),
  Value(Six),
  Value(Seven),
  Value(Eight),
  Value(Nine),
);

let equal = ((a1, a2, a3, a4, a5, a6, a7, a8, a9): t, (b1, b2, b3, b4, b5, b6, b7, b8, b9): t): bool =>
  DomainCell.equal(a1,b1) && DomainCell.equal(a2, b2) && DomainCell.equal(a3, b3) && DomainCell.equal(a4, b4) && DomainCell.equal(a5, b5) && DomainCell.equal(a6, b6) && DomainCell.equal(a7, b7) && DomainCell.equal(a8, b8) && DomainCell.equal(a9, b9);

let isComplete = (row: t): bool =>
  row
  |> Utils.sort9(compare)
  |> equal(perfectRow);
