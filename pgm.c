#include<stdio.h>
int main()
{
int n,c;
printf("Enter a number");
scanf("%d",&n);
for(c=2;c<n;c++){
	if(n%c==0){
		if(n%2==0){
			printf("\nNot Prime and %d is even\n",n);
			break;
		}
		else{
		    printf("\nNot Prime	and %d is odd\n",n);
		    break;
		}
	}	
}
if(c==n){
	printf("\nprime\n");
}
return 0;
}


