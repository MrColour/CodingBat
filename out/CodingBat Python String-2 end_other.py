def end_other(a, b):
  # s1, s2 = (a.lower(), b.lower()) if len(a) < len(b) else (b.lower(), a.lower())
  # return (s2[-len(s1):] == s1)
  s1, s2 = a.lower(), b.lower()
  return (s1.endswith(s2) or s2.endswith(s1))
