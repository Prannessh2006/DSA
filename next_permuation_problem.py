lst = ["""elements"""]
index = -1
for i in range(len(lst)-2,-1,-1):
  if(lst[i]>lst[i+1]):
    index = i
    break
if(index==-1):
  lst = reversed(lst)
  break
for i in range(len(lst)-1,-1,-1):
  if(lst[i]>lst[index]):
    lst[i],lst[index]=lst[index],lst[i]
    break
lst[index+1:] = reversed[index+1:]
return
