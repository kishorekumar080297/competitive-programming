s=int(input())
a=(s*1000)/3600
if a.is_integer()==True:
    print(int(a))
else:
    # a=float(a)
    print(round(a,2)-0.01)
