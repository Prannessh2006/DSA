from collections import deque
class Tree:
    def __init__(self,val,left=None,right=None):
        self.val = val
        self.left = left
        self.right = right
lst=[]
root = None
def levelordertraversal(root):
    if not root:
        return
    q = deque([])
    q.append(root)
    while q:
        node = q.popleft()
        lst.append(node.val)
        if(node.left):
            q.append(node.left)
        if(node.right):
            q.append(node.right)
def insertelement(root,val):
    if not root:
        return Tree(val)
    if val<root.val:
        root.left = insertelement(root.left,val)
    else:
        root.right = insertelement(root.right,val)
    return root
values = [10,12,8,90,54,110,3]
for i in values:
    root = insertelement(root,i)
levelordertraversal(root)
print(lst)
