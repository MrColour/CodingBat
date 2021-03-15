def squirrel_play(temp, is_summer):
  if (60 <= temp <= 90):
    return (True)
  if (is_summer and (60 <= temp <= 100)):
    return (True)
  return (False)
