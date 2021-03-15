def fix_teen(n):
  if (13 <= n <= 19):
    if (n != 15 and n != 16):
      return (0)
  return (n)

def no_teen_sum(a, b, c):
  args = [a, b, c]
  return (sum([fix_teen(x) for x in args]))
