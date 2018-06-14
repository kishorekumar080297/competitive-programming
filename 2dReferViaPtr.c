#include <stdio.h>

void printSumOfHeightAndWeight(int *ptr);

int main()
{
    int students[3][2];
    int *ptr = students;

    int counter=1;
    while(counter <= 6)
    {
        //As it is a pointer no & address of operator is required.
        scanf("%d",ptr);
        counter++;
        ptr++;
    }
    printSumOfHeightAndWeight(students);
    return 0;
}

void printSumOfHeightAndWeight(int *ptr)
{
    int sumOfHeight = 0;
    int sumOfWeight = 0;
int counter=1;
while(counter<=3)
{
    sumOfHeight+=*ptr;
    ptr++;
    sumOfWeight+=*ptr;
    ptr++;
    counter++;
}
    printf("%d %d",sumOfHeight,sumOfWeight);

}
