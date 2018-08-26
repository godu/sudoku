open Cell;
let printCell = (cell: Cell.t): string =>
  switch (cell) {
  | Empty => "."
  | Value(One) => "1"
  | Value(Two) => "2"
  | Value(Three) => "3"
  | Value(Four) => "4"
  | Value(Five) => "5"
  | Value(Six) => "6"
  | Value(Seven) => "7"
  | Value(Eight) => "8"
  | Value(Nine) => "9"
  };

let printRow = ((a, b, c, d, e, f, g, h, i): Row.t): string =>
  Printf.sprintf(
    "|%s %s %s|%s %s %s|%s %s %s|",
    a |> printCell,
    b |> printCell,
    c |> printCell,
    d |> printCell,
    e |> printCell,
    f |> printCell,
    g |> printCell,
    h |> printCell,
    i |> printCell,
  );

let printGrid = ((a, b, c, d, e, f, g, h, i): Grid.t): string =>
  Printf.sprintf(
    "   1 2 3 4 5 6 7 8 9
  +-----+-----+-----+
1 %s
2 %s
3 %s
  +-----+-----+-----+
4 %s
5 %s
6 %s
  +-----+-----+-----+
7 %s
8 %s
9 %s
  +-----+-----+-----+",
    a |> printRow,
    b |> printRow,
    c |> printRow,
    d |> printRow,
    e |> printRow,
    f |> printRow,
    g |> printRow,
    h |> printRow,
    i |> printRow,
  );
