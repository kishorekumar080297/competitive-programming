import string
s='_'
a=raw_input()
arr=a.split('_')
arr[0]=arr[0][::-1]
c=s.join(arr)
print(c)

