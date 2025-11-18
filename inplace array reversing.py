def rev(x,i):
    if(i==int(len(x)/2)):
        return x
    else:
        x[i],x[len(x)-i-1]=x[len(x)-i-1],x[i]
        return rev(x,i+1)
x = [10,30,20,40,60,50,70,80]
print(rev(x,0))
