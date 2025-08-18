import itertools
x = list(map(int,input().split(" ")))
target = int(input("Enter the target: "))
current_target=x[0]
count=0
for i in range(len(x)):
  sum=0
  for j in range(i,len(x)):
    sum+=x[j]
    if(sum==target):
      count+=1
print(count)
    
    
    
