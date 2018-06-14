#include<stdio.h>
#include<string.h>
int main(){
char a[100],temp;
fgets(a,100,stdin);
int i=0,j;
j=strlen(a)-1;
while(i<j){
if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
i++;
j--;
}
printf("\nThe string is ");
puts(a);
return 0;
}
