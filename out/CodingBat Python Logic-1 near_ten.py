def near_ten(num):
  num += 2
  num %= 10
  return (0 <= num <= 4)
