def chi_square_test(arr):
  e_f = sum(arr)/len(arr)
  end=0
  for i in arr:
    end += pow((i-e_f),2)/e_f
  return end
