#include<stdio.h>
int main(){
  int a=5;
  int *ptr;
  ptr=&a;
  printf("a=%d \n*ptr=%d \nptr=%d\n",a,*ptr,ptr);
  printf("size of ptr=%d\n",sizeof(*ptr));
  return 0;
}
