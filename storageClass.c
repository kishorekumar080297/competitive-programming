#include<stdio.h>
void printCounter();
int main()
{
printCounter();
printCounter();
return 0;
}
void printCounter(){
static int counter=48;
counter+=2;
printf("%d ",counter);
}


