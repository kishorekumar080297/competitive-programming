#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
char a[100],temp;
fgets(a,100,stdin);
int i=0;
int j=strlen(a)-1;
while(a[i]!='_'){
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
  i++;
  j--;
}
puts(a);
return 0;
}
