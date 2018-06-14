#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Enter a string ");
fgets(str,100,stdin);
int startindex=0;
int endindex=strlen(str)-1;
int temp;
printf("The given string is ");
puts(str);
while(startindex<endindex){
temp=str[startindex];
str[startindex]=toupper(str[endindex]);
str[endindex]=toupper(temp);
startindex++;
endindex--;
if(startindex==endindex){
str[startindex]=toupper(str[startindex]);
}
}
printf("The new string is ");
puts(str);
return 0;
}



