def last2(str):
  search = str[-2:]
  
  if (len(str) < 2):
    return (0)
  
  res = 0
  for i in range(len(str)):
    if (str[i:i+2] == search):
        res += 1
  return (res - 1)
