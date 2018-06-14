#include<stdio.h>

void main()
{
    int N;
    scanf("%d",&N);

    int arr[N];
    int index;
    //Accept input values
    for(index=0; index<N; index++)
    {
        scanf("%d",&arr[index]);
    }

    int *ptr=arr;
    for(index=0; index<N; index+=2){
        printf("%d\n",*ptr);
        //Fill in the code here
ptr=ptr+2;
    }//end of for loop

}//end of main method
