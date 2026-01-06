# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import defaultdict
class Solution:
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        d = {}
        def dfs(root,depth):
            if not root:
                return
            if depth not in d:
                d[depth]=0
            d[depth]+=root.val
            dfs(root.left,depth+1)
            dfs(root.right,depth+1)
            return
        dfs(root,1)
        lst = list(d.items())
        lst.sort(key=lambda x:x[1],reverse=True)
        return lst[0][0]
