#include<stdio.h>
int main(){
int a,b,i,j;
scanf("%d %d",&a,&b);
i=a;
j=b;
while(i<=b){
	if(i%2==1){
		printf("%d ",i);	
	}
	if(j%2==0){ 
		printf("%d ",j);
	}
	i++;
	j--;
}
return 0;
}
