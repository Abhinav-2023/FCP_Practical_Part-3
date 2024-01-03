#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_size 100

int compare(const void *a, const void *b) {
    char ab[max_size * 2 + 1];
    char ba[max_size * 2 + 1];

    sprintf(ab, "%d%d", *(const int *)a, *(const int *)b);
    sprintf(ba, "%d%d", *(const int *)b, *(const int *)a);

    return strcmp(ba, ab);
}

void print_largest(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < n; ++i) {
        printf("%d", arr[i]);
    }

    printf("\n");
}

void main() 
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0 || n > max_size) {
        printf("Invalid size\n");
        return 1;
    }

    int arr[max_size];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    print_largest(arr, n);
}