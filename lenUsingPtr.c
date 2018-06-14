#include<stdio.h>
int main()
{
char stringvalue[100];
fgets(stringvalue,100,stdin);
char *ptr=stringvalue;
int length=0;
while(*ptr!='\n'){
length++;
ptr++;
}
printf("%d",length);
return 0;
}

