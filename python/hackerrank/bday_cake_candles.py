import sys

def bcake(n,ar):
  ar.sort()
  count=1
  for i in range(0,n-1):
    if ar[i]==ar[i+1]:
      count+=1
  return count 

n=int(input().strip())
ar=list(map(int,input().strip().split(' ')))
res=bcake(n,ar)
print(res)


