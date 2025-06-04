import numpy as np
def t_test(arr_1,arr_2):
  n_1,n_2 = len(arr_1),len(arr_2)
  m_1,m_2 = np.mean(arr_1),np.mean(arr_2)
  var_1,var_2=np.var(arr_1,ddof=1),np.var(arr_2,ddof=1)
  s = (var_1+var_2)/(n1+n2-2)
  return  (m_1-m_2)/np.sqrt(s*(1/n_1+1/n_2))
