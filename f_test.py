import numpy as np
def f_test(arr_1,arr_2):
  s_x = np.var(arr_1,ddof=1)
  s_y = np.var(arr_2,ddof=1)
  return s_x/s_y
