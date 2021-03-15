def sum13(nums):
  if (len(nums) <= 0):
    return (0)
  
  total = 0
  if (nums[0] != 13):
    total += nums[0]
  for i in range(len(nums) - 1):
    if (nums[i] != 13 and nums[i + 1] != 13):
      total += nums[i + 1]
  return (total)
