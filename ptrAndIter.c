#include<stdio.h>
int main()
{
char stringvalue[100];
fgets(stringvalue,100,stdin);
char *ptr=stringvalue;
while(*ptr!='\0')
{
if(*ptr==toupper(*ptr)){
printf("%c",*ptr);
}
ptr++;
}
return 0;
}

