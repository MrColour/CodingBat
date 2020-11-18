def string_bits(str):

  res = [str[i] for i in range(0, len(str), 2)]

  return ("".join(res))
