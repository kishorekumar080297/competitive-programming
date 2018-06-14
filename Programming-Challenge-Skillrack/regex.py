import re
a=input().strip()
res=re.findall("\d+|[a-zA-Z]",a)
count=0
for i in res:
	if i.isalpha():
		print(i*count,end="")
	else:
		count=int(i)
