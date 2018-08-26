open GoduBsAva.Sync;
open Cell;
open Row;

test("equal", t => {
  (Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty)
  |> equal((Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty))
  |> t.truthy;
  (Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty)
  |> equal((Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty, Value(One)))
  |> t.falsy;
});

let (_1, _2, _3, _4, _5, _6, _7, _8, _9) = (
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

test("isComplete", t => {
  (_1, _2, _3, _4, _5, _6, _7, _8, _9) |> isComplete |> t.truthy;
  (_9, _8, _7, _6, _5, _4, _3, _2, _1) |> isComplete |> t.truthy;
  (_1, _1, _3, _4, _5, _6, _7, _8, _9) |> isComplete |> t.falsy;
  (Empty, _2, _3, _4, _5, _6, _7, _8, _9) |> isComplete |> t.falsy;
});
