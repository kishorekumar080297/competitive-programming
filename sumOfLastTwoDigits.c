#include<stdio.h>
int main()
{
int n,digits,sum=0,num;
scanf("%d",&n);
num=n;
while(num!=1){
    digits=num%10;
    sum+=digits;
    num=num/10;
}
printf("%d",sum);
return 0;
}
