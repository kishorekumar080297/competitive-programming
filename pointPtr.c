#include<stdio.h>
int main(){
int numbers[]={10,20,30,40};
int *ptr=numbers;
int arr_size=sizeof(numbers)/sizeof(numbers[0]);
int index=0;
while(index<arr_size){
*ptr=*ptr*1000;
ptr++;
index++;
}

*ptr=*ptr*100;
ptr=numbers;
printf("%d",*(ptr+2));
return 0;
}
