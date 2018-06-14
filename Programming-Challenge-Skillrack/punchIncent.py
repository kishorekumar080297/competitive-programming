a=int(input())
b=int(input())
sum=a
c=[]
for i in range(0,int(b)):
	d=sum+200*i
	c.append(d)
e=0
for i in range(0,int(b)):
	e+=c[i]
print(e)

