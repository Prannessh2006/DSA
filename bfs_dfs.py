bfs_lst=[]
lst=[]
from collections import deque
def bfs(adj,start,bsf_lst,visited):
    visited[start]=True
    q = deque([start])
    while q:
        node = q.pop()
        bfs_lst.append(node)
        for i in range(len(adj[node])):
            if adj[node][i]==1 and visited[i]==False:
                visited[i]=True
                q.append(i)
                
    return
def dfs(adj,node,lst,visited):
    visited[node]=True
    lst.append(node)
    for i in range(len(adj[node])):
        if(adj[node][i]==1 and visited[i]==False):
            dfs(adj,i,lst,visited)
node_connections = [[1,2],[2,4],[2,5],[2,3],[3,4],[3,5]]
full_lst = []
for a in node_connections:
    full_lst.extend(a)
length_of_matrix = max(full_lst)
adjacency_matrix =[[0 for i in range(length_of_matrix+1)] for j in range(length_of_matrix+1)]
for i,j in node_connections:
    adjacency_matrix[i][j]=1
    # adjacency_matrix[j][i]=1
visited = [False]*(length_of_matrix+1)
dfs(adjacency_matrix,1,lst,visited)
bfs(adjacency_matrix,1,bsf_lst,visited)
print(lst)
