#include<stdio.h>
int printValue();
int counter=200;
int main()
{
printValues();
printf("%d",counter);
printValues();
return 0;
}
int printValues()
{
static int counter=100;

printf("%d",++counter);
}

