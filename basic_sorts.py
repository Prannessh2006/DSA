def merge(arr,left,mid,right):
  n1 = mid-left+1
  n2 = right-mid
  
  l = [0]*n1
  r = [0]*n2
  
  for i in range(n1):
    l[i] = arr[left+i]
    
  for j in range(n2):
    r[j] = arr[mid+1+j]
    
  i = j = 0
  k = left
  
  while(i<n1 and j<n2):
    
    if(l[i]<=r[j]):
      arr[k]=l[i]
      i+=1
      
    else:A
      arr[k]=r[j]
      j+=1
      
    k+=1
    
  while(i<n1):
    
    arr[k]=l[i]
    i+=1
    k+=1
    
  while(j<n2):
    
    arr[k]=r[j]
    
    j+=1
    k+=1

def mergesort(arr,left,right):
  if(left<right):
    mid=(left+right)//2
    mergesort(arr,left,mid)
    mergesort(arr,mid+1,right)
    merge(arr,left,mid,right)
    
def selection_sort(arr):
    for i in range(len(arr)-1):
        min_index = i
        for j in range(i+1,len(arr)):
            if(arr[j]<arr[min_index]):
                min_index=j
        if(i!=min_index):
            arr[i],arr[min_index]=arr[min_index],arr[i]
            
def insertion_sort(arr):
    for i in range(1,len(arr)):
        key = arr[i]
        j=i-1
        while(j>=0 and arr[j]>key):
            arr[j+1]=arr[j]
            j=j-1
        arr[j+1]=key
            
x = [38, 27, 43, 10]
# mergesort(x,0,len(x)-1)
# selection_sort(x)
insertion_sort(x)
for i in range(len(x)):
  print(x[i],sep=" ")
