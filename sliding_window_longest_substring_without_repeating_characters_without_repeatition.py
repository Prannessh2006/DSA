string = input("Enter the string: ")
subset_length = 0
for i in range(len(string)):
  original=""
  count=0
  for j in range(i,len(string)):
    if(string[j] not in original):
      original+=string[j]
      count+=1
    else:
      if(count>subset_length):
        subset_length=count
      break
  if(count>subset_length):
        subset_length=count
print(subset_length)  
  
