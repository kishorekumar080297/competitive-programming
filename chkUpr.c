#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
char string[100];
printf("\nEnter a string ");
fgets(string,100,stdin);
int i=0;
printf("\n");
while(string[i]!='\0'){
	if(isupper(string[i])){
		printf("%c",string[i]);
	}
	i++;
}
printf("\n");
return 0;
}


