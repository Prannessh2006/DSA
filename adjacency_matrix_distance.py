n = int(input())
matrix=[]
distance=[]
for i in range(n):
    matrix.append(list(map(int,input().split(" "))))
    distance.append([9999999999999999 for j in range(n)])
for i in range(n):
    for j in range(n):
        if(matrix[i][j]==1):
            distance[i][j]=0
        else:
            if(i>0):
                distance[i][j] = min(distance[i][j],distance[i-1][j]+1)
            if(j>0):
                distance[i][j]= min(distance[i][j],distance[i][j-1]+1)
for i in range(n-1,-1,-1):
    for j in range(n-1,-1,-1):
            if(i<n-1):
                distance[i][j] = min(distance[i][j],distance[i+1][j]+1)
            if(j<n-1):
                distance[i][j]= min(distance[i][j],distance[i][j+1]+1)
for i in range(n):
    print(distance[i],end="\n")
