#include <stdio.h>
void main()
{
    int size;
    int sum=0;
    printf("Please enter the number of values : ");
    scanf("%d",&size);  
    int marks[size];

    for(int i=0;i<size;i++)
    {
        printf("Please enter a number : ");
        scanf("%d",&marks[i]);
    }

    for(int i=0;i<size;i++)
    {
        sum+=marks[i];
    }

    printf("Sum of Numbers : %d",sum);
    printf("Average of Numbers : %d",sum/size);
}
