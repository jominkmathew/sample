#include<stdio.h>

void main()
{
    int rows;
    int columns;
    
    printf("Enter No. of Rows : ");
    scanf("%d", &rows);  
    printf("Enter No. of Columns : ");
    scanf("%d", &columns);  
    
    int table[rows][columns];
    
    for(int i=0;i<rows;i++)
    {
        printf("Enter values for row no. %d : \n",i);
        for(int j=0;j<columns;j++)
        {
            printf("Enter values for column no. %d : ",j);
            scanf("%d",&table[i][j]);  
        }
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        { 
            printf("%d|",table[i][j]);
        }
        printf("\n");
    }
}