#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n];
int i,j,temp;
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
	for(j=0;j<i+1;j++){
		if(a[i]<a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
for(i=0;i<n;i++){
	if(a[i]%2!=0){
		printf("%d ",a[i]);
	}
}
for(i=0;i<n;i++){
        if(a[i]%2==0){
                printf("%d ",a[i]);
        }
}
return 0;
}
