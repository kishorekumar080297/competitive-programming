#include<stdio.h>
int main(){
int i,sum=0;
for(i=1000;i<9999;i++){
if(i%7==0){
sum=sum+i;
}
}
printf("The sum of nos which are divisible by 7 is %d",sum);
}


