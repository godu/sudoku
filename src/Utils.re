let map9 = (func, (a, b, c, d, e, f, g, h, i)) => (
  func(a),
  func(b),
  func(c),
  func(d),
  func(e),
  func(f),
  func(g),
  func(h),
  func(i),
);
let fold9 = (func, acc, (a, b, c, d, e, f, g, h, i)) =>
  [a, b, c, d, e, f, g, h, i] |> List.fold_left(func, acc);

let sort9 =
    (
      compare: ('a, 'a) => int,
      (a: 'a, b: 'a, c: 'a, d: 'a, e: 'a, f: 'a, g: 'a, h: 'a, i: 'a),
    )
    : ('a, 'a, 'a, 'a, 'a, 'a, 'a, 'a, 'a) =>
  [a, b, c, d, e, f, g, h, i]
  |> List.sort(compare)
  |> (
    fun
    | [a, b, c, d, e, f, g, h, i] => (a, b, c, d, e, f, g, h, i)
    | _ => (a, b, c, d, e, f, g, h, i)
  );
