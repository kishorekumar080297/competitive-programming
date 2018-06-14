#include<stdio.h>
int main()
{
int n,num,digits,sum=0;
scanf("%d",&n);
num=n;
while(num!=0){
digits=num%10;
sum+=digits;
num=num/10;
}
printf("%d\n",sum);
return 0;
}

