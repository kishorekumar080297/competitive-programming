#include<stdio.h>
#include<ctype.h>
int main()
{
char str[100];
int index=0;
printf("Enter a string");
fgets(str,100,stdin);
char del;
scanf("%c",&del);
while(str[index]!='\0'){
if(str[index]==del){
str[index++]=str[index];
}
printf("%c",str[index]);
index++;
}
return 0;
}

