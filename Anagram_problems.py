from collections import Counter
x = input("Enter the string: ")
y = input("Enter the substring: ")
count=0
for i in range(len(x)-len(y)+1):
  current=x[i:i+len(y)]
  if(Counter(current)==Counter(y)):
    count+=1
print(count)
