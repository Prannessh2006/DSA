arr = [
        [1, 2, 3, 4],
        [5, 6, 7, 8],
        [9, 10, 11, 12],
        [13, 14, 15, 16]
    ]
rows = len(arr)
cols = len(arr[0])
# dp = [[0 for _ in range(cols)] for _ in range(rows)]
for i in range(rows):
    for j in range(cols):
        if i>0:
            arr[i][j]+=arr[i-1][j]
        if j>0:
            arr[i][j]+=arr[i][j-1]
        if i>0 and j>0:
            arr[i][j]-=arr[i-1][j-1]
print(arr)
