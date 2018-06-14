#include<stdio.h>
int main(){
int n,digit,i=0;
scanf("%d",&n);
int t=n;
while(n){
	digit=n%10;
	n/=10;
	if(digit==0)
		continue;
	else{
	if(t%digit==0)
		i++;
	}
}
printf("%d",i);
return 0;
}
