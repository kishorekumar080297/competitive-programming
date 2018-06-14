#include<stdio.h>
int main(){
int sum,l,n,i,tot;
scanf("%d %d",&l,&n);
sum=l;
for(i=0;i<n;i++){
tot=sum+200*i;
tot+=tot;
}
printf("%d\n",tot);
return 0;
}

