def in1to10(n, outside_mode):
  res = False
  if (1 <= n <= 10):
    res = True
  if (outside_mode and n == 1 or n == 10):
    return (True)
  return (res ^ outside_mode)
