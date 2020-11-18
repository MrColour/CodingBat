def make_chocolate(small, big, goal):
  big_needed = goal // 5
  goal -= (min(big_needed, big) * 5)
  
  if (goal > small):
    return (-1)
  return (goal)
