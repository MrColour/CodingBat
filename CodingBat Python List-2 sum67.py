def sum67(nums):
  add = True
  
  total = 0
  for num in nums:
    if (num == 6):
      add = False
    if (add):
      total += num
    if (num == 7):
      add = True
      
  return (total)
