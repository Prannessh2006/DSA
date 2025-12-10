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
def dfs(root,visited,lst):
    if not root:
        return
    if(not visited[root.val-1]):
        visited[root.val-1]=True
        lst.append(root.val)
        dfs(root.left,visited,lst)
        dfs(root.right,visited,lst)
lst=[]
visited = [False]*7
dfs(root,visited,lst)
print(lst)
