#include<stdio.h>

void main()
{
    int arr[3][3];
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d] of arr \n",i,j);
            scanf("%d",&arr[i][j]);
        } 
    }
    printf("Original matrix: \n");
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ",arr[i][j]);
        } 
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i==j)|| (j>i))
            {
                printf(" %d ", arr[i][j]);
            }
            else{
                printf(" %d ",0);
            }
        } 
        printf("\n");
    }
}
