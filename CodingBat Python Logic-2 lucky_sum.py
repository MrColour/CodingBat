def lucky_sum(a, b, c):
  nums = [a, b, c]
  
  try:
    stop = nums.index(13)
  except:
    stop = len(nums)
  
  return (sum(nums[:stop]))
