#include<stdio.h>
int main(){
	int marks[]={10,20,30,40,50};
	int *ptr=marks;
	*ptr=*(ptr+2);
	printf("%d\n",*ptr);
	
return 0;
}
