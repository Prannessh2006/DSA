adj_matrix = [
    [0, 1, 1, 0, 0, 1],
    [1, 0, 1, 0, 1, 1],
    [1, 1, 0, 1, 0, 0],
    [0, 0, 1, 0, 1, 0],
    [0, 1, 0, 1, 0, 1],
    [1, 1, 0, 0, 1, 0]
]

length = len(adj_matrix)
visited = [False]*length


count = 0

def check(start,curr_node,distance):
    global count
    global length
    if distance==0 and start==curr_node:
        pass
    elif visited[curr_node]:
        return
    visited[curr_node]=True
    if adj_matrix[curr_node][0]==1 and distance==length:
        count+=1
    else:
        for i in range(length):
            if not visited[i] and adj_matrix[curr_node][i]==1:
                check(start,i,distance+1)
    visited[curr_node]=False
    return

check(0,0,1)
print(count)
