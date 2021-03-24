#include<stdio.h>
void main()
{
    int i,j,r1,c1,a[10][10],b[10][10],c[10][10];
    printf("enter the order of the matrix : ");
    scanf("%d%d",&r1,&c1);
    printf("enter the elements of the first matrix:");
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter the elements of the second matrix:");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Matrix addition:");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d",a[i][j]+b[i][j]);
        }
    }
}