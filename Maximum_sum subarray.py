lst = list(map(int,input().split(" ")))
global_sum=lst[0]
for i in range(len(lst)):
    current_sum=0
    for j in range(i,len(lst)):
        current_sum+=lst[j]
        global_sum = max(global_sum,current_sum)
print(global_sum)
