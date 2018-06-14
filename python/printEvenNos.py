#Your code below
a=int(input())
n=a 
while n>0:
    digit=n%10
    n=n/10
    if digit%2==0:
        print(digit,)
