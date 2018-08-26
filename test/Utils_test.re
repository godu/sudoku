open GoduBsAva.Sync;
open Utils;

test("map9 add1", t => {
  let add1 = 1 |> (+);

  (0, 1, 2, 3, 4, 5, 6, 7, 8)
  |> map9(add1)
  |. t.deepEqual((1, 2, 3, 4, 5, 6, 7, 8, 9));
});

test("fold9 sum", t =>
  (0, 1, 2, 3, 4, 5, 6, 7, 8)
  |> fold9((+), 0)
  |. t.is(36)
);

test("sort9 Pervasives.compare", t => {
  let compare = (a: int, b: int) => a - b;

  (8, 7, 6, 5, 4, 3, 2, 1, 0)
  |> sort9(compare)
  |. t.deepEqual((0, 1, 2, 3, 4, 5, 6, 7, 8));
});
