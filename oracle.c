#include<stdio.h>
int main()
{
int arr[3][3]={{3,2,1},{1,2,3}};
int i,j;
for(i=0;i<2;i++){
for(j=0;j<3;j++){
	printf("%d",2*arr[i][j]);
}
}
return 0;
}

