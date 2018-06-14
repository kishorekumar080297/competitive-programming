#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int marks[n][2];
int stud;
for(stud=0;stud<n;stud++){
scanf("%d",&marks[stud][0]);
scanf("%d",&marks[stud][1]);
}
int tot[n],i,j,temp;
for(i=0;i<n;i++){
tot[i]=marks[i][0]+marks[i][1];
}
for(i=0;i<n;i++){
	for(j=1;j<i+1;j++){
		if(tot[i]>tot[j]){
			temp=tot[i];
			tot[i]=tot[j];
			tot[j]=temp;
		}
	}
}
printf("%d",tot[0]);
return 0;
}
