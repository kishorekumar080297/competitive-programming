#include<stdio.h>
#include<string.h>
void printVowels(char *ptr);
int main()
{
char string[100];
fgets(string,100,stdin);
printVowels(string);
return 0;
}
void printVowels(char *ptr){
char current;
while(*ptr!='\0'){
current=toupper(*ptr);
if(current=='A' ||current=='E' ||current=='I' ||current=='O' ||current=='U' ){
putchar(*ptr);
}
ptr++;
}
}
//execute in code.hackerearth.com
