#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,odd=0,rem,digit,num;
scanf("%d",&n);
num=n;
while(n>0){
    digit=n%10;
    n=n/10;
//   printf("%d\t",n);
    rem=digit%2;
    if(rem!=0){
        odd=odd+digit;
    }
}
printf("\n%d",odd);
}
