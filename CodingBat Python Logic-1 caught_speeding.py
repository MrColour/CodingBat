def caught_speeding(speed, is_birthday):
  offset = 5 if is_birthday else 0
  
  if (speed <= 60 + offset):
    return (0)
  elif (speed <= 80 + offset):
    return (1)
  else:
    return (2)
