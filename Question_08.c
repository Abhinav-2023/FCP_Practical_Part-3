#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct {
    char name[MAX_SIZE];
    char address[MAX_SIZE];
} Entry;

int compare(const void *a, const void *b) {
    return strcmp(((Entry *)a)->name, ((Entry *)b)->name);
}

void sortEntries(Entry entries[], int n) {
    qsort(entries, n, sizeof(Entry), compare);
}

void printSortedEntries(Entry entries[], int n) {
    printf("\nSorted Entries:\n");

    for (int i = 0; i < n; ++i) {
        printf("Name: %s\n", entries[i].name);
        printf("Address: %s\n", entries[i].address);
        printf("\n");
    }
}

void main() 
{
    int n;

    printf("Enter the number of entries: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid number of entries\n");
        return 1;
    }

    Entry *entries = (Entry *)malloc(n * sizeof(Entry));

    printf("Enter names and addresses:\n");
    for (int i = 0; i < n; ++i) {
        printf("Entry %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", entries[i].name);
        printf("Address: ");
        scanf("%s", entries[i].address);
    }

    sortEntries(entries, n);
    printSortedEntries(entries, n);

    free(entries);
}