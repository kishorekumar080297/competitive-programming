#include<stdio.h>
#include<string.h>
int main(){
char s[50];
printf("Enter a string");
fgets(s,50,stdin);
char first=s[0];

if(first=='a' || first=='e' || first=='i' || first=='o' || first=='u'){
	printf("\nStarts with a Vowel\n");
}
else{
	printf("\nDoesn't start with a vowel\n");
}
return 0;
}


