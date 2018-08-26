open GoduBsAva.Sync;
open Domain;

test("getCell cells", t => {
  (0, 0) |> getCell(initialGrid) |. t.deepEqual(Value(One));
  (8, 8) |> getCell(initialGrid) |. t.deepEqual(Value(Eight));
});
test("getCell out of bounce", t => {
  ((-1), (-1)) |> getCell(initialGrid) |. t.deepEqual(Empty);
  (9, 9) |> getCell(initialGrid) |. t.deepEqual(Empty);
});
test("getGroup first row", t =>
  (
    (0, 0),
    (0, 1),
    (0, 2),
    (0, 3),
    (0, 4),
    (0, 5),
    (0, 6),
    (0, 7),
    (0, 8),
  )
  |> getGroup(initialGrid)
  |. t.deepEqual((
    Value(One),
    Value(Two),
    Value(Three),
    Value(Four),
    Value(Five),
    Value(Six),
    Value(Seven),
    Value(Eight),
    Value(Nine),
  ))
);
