def centered_average(nums):
  total = sum(sorted(nums)[1:-1])
  return (total // (len(nums) - 2))
