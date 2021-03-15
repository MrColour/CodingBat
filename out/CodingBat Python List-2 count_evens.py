def count_evens(nums):
  even = [(x + 1) % 2 for x in nums]
  
  return (sum(even))
