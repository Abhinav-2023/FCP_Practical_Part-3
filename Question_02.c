#include <stdio.h>

void transpose(int arr[2][2], int n)
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < n; j++) 
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

void main() 
{
    int arr[2][2] = {{1, 2},{3, 4}};
    int n = sizeof(arr) / sizeof(arr[0]);

    transpose(arr, n);

    printf("Transposed Array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}