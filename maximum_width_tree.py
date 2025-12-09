ans=0
first={}
def dfs(root,depth,idx):
  nonlocal ans
  if not root:
    return
  if depth not in first:
    depth[first]=idx
  ans = max(ans,idx-depth[first]+1)
  dfs(root.left,depth+1,idx*2)
  dfs(root.right,depth+1,idx*2+1)

dfs(root,0,1)
