from collections import deque
class node:
    def __init__(self,val):
        self.val=val
        self.left=None
        self.right=None
root = node(1)
root.left = node(2)
root.right = node(3)
root.left.left = node(4)
root.left.right = node(5)
root.right.left = node(6)
root.right.right = node(7)
def bfs(root,visited,lst):
    visited[root.val-1]=True
    q = deque()
    q.append(root)
    while q:
        node = q.popleft()
        if(node.left):
           q.append(node.left)
        if(node.right):
            q.append(node.right)
        lst.append(node.val)
visited = [False]*7
bfs(root,visited,lst)
print(lst)
