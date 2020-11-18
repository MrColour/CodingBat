def close_far(a, b, c):
  args = [a, b, c]
  
  args.sort()
  
  if (args[0] - args[1] <= 1 and args[2] - args[1] >= 2):
    return (True)
    
  if (args[1] - args[2] <= 1 and args[1] - args[0] >= 2):
    return (True)
  return (False)
  
