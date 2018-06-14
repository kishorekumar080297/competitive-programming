#include<stdio.h>
int main()
{
int k=5;
int n,rev=0;
scanf("%d",&n);
while(n>0){
rev=rev*10;
rev=rev+n%10;
n=n/10;
}
printf("%d %d",k++,++k);
printf("%d",rev);
}

/*
N=123,REV=0
LOOP ONE:
REV=0*10=0
REV=0+123%10=3
N=123/10=12

LOOP TWO:
REV=3*10=30
REV=30+12%10=32
N=12/10=1

LOOP THREE:
REV=32*10=320
REV=320+1%10=321
N=1/10=0
*/

