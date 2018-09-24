type value =
  | One
  | Two
  | Three
  | Four
  | Five
  | Six
  | Seven
  | Eight
  | Nine;

type t =
  | Empty
  | Value(value);

let toInt = (cell: t): int =>
  switch (cell) {
  | Empty => 0
  | Value(One) => 1
  | Value(Two) => 2
  | Value(Three) => 3
  | Value(Four) => 4
  | Value(Five) => 5
  | Value(Six) => 6
  | Value(Seven) => 7
  | Value(Eight) => 8
  | Value(Nine) => 9
  };

let equal = (a: t, b: t) =>
  switch (a, b) {
  | (Empty, Empty) => true
  | (Value(a'), Value(b')) => a' === b'
  | (Value(_), Empty) => false
  | (Empty, Value(_)) => false
  };

let compare = (a: t, b: t): int => {
  Pervasives.compare(a |> toInt, b |> toInt);
}
