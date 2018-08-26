open GoduBsAva.Sync;
open Cell;

test("toInt", t =>
  [
    Empty,
    Value(One),
    Value(Two),
    Value(Three),
    Value(Four),
    Value(Five),
    Value(Six),
    Value(Seven),
    Value(Eight),
    Value(Nine),
  ]
  |> List.map(cell => cell |> toInt)
  |> t.deepEqual([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
);

test("equal", t => {
  Empty |> equal(Empty) |> t.truthy;
  Value(One) |> equal(Value(One)) |> t.truthy;

  Value(One) |> equal(Value(Two)) |> t.falsy;
  Value(One) |> equal(Empty) |> t.falsy;
  Empty |> equal(Value(One)) |> t.falsy;
});

test("compare", t => {
  Cell.compare(Value(Five), Value(Five)) |> t.is(0);
  Cell.compare(Empty, Value(Five)) |> t.is(-1);
  Cell.compare(Value(Nine), Value(Five)) |> t.is(1);
});
