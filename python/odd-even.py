n=int(input())
even=0
odd=0
a=n
while a>0:
    digit=a%10
    a=a/10
    if digit%2!=0:
        odd+=digit
    else:
        even+=digit
print(odd-even)
