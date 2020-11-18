def lone_sum(a, b, c):
  nums = [a, b, c]
  
  res = 0
  for num in nums:
    if (nums.count(num) == 1):
      res += num
  return (res)
