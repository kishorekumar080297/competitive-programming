import sys
arr=list(map(int,input().strip().split(' ')))
s=sum(arr)
a=s-max(arr)
b=s-min(arr)
print(a,b)
