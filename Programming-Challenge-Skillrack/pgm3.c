#include<stdio.h>
#include <stdlib.h>

int main()
{
int n;
int d,i,j,c=0;
scanf("%d %d",&n,&d);
int a[n];
for(i=0;i<n;i++){
   scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++){
    for(j=i+1;i<j;i++){
        if((a[i]+a[j])%d==0){
            c++;
        }
    }
}
printf("%d",c);
return 0;
}
