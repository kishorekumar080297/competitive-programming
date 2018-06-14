data=[]
a=int(input())
for i in range(0,a):
	x=input()
	data.append(x)
data.sort(reverse=True)
print()
for i in range(0,a):
	print(data[i],end=" ")
