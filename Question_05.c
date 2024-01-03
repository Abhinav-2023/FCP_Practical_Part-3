#include<stdio.h>

void main(){
    int arr[5];
    int counter=0;
    printf("Enter any 5 integers\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    int *ptr = arr;
    int *ptr2 = arr;
    for (int i = 0; i < 5; i++,ptr2++)
    {
        for (int j = 0; j < 5; j++,ptr++)
        {
            if((*ptr)==(*ptr2) && ptr != ptr2){
                counter++;
                printf("The duplicate of %d is present at %d index\n",*ptr2,j);
            }
        }
        if (counter>0)
        {
            printf("The total number of duplicates is %d\n",counter); 
        } 
        counter=0;
           
    }
}
