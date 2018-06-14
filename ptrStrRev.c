#include<stdio.h>
#include<string.h>
int main()
{
char stringvalue[100];
fgets(stringvalue,100,stdin);
int l=strlen(stringvalue);
char *ptr;
ptr=stringvalue+l-1;
do{
	printf("%c",*ptr);
}
while(ptr-- != &stringvalue[0]);
printf("\n");
return 0;
}
