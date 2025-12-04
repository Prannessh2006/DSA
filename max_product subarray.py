lst = list(map(int,input().split(" ")))
global_prod=lst[0]
for i in range(len(lst)):
    current_prod=1
    for j in range(i,len(lst)):
        current_prod*=lst[j]
        global_prod = max(global_prod,current_prod)
print(global_prod)
