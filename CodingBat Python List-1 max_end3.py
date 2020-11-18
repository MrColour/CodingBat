def max_end3(nums):
  largest = nums[0] if nums[0] > nums[-1] else nums[-1]
  
  res = [largest] * len(nums)
  return (res)
