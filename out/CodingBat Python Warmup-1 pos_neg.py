def pos_neg(a, b, negative):
  if (negative):
    return  (a < 0 and b < 0)
  a /= abs(a)
  b /= abs(b)
  return (a != b)
