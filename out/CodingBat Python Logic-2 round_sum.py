
def round_sum(a, b, c):
  args = [a, b, c]
  
  return (int(sum(round(x, -1) for x in args)))
