#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
char str[100];
printf("Enter a string ");
fgets(str,100,stdin);
printf("Enter a character ");
char toAppend;
scanf("%c",&toAppend);
int index=strlen(str)-1;
printf("%d",index);
str[index]=toAppend;
index++;
str[index]='\0';
printf("\nThe new string is ");
puts(str);
return 0;
}

