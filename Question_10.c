#include <stdio.h>
#include <ctype.h>

int countSuccessiveVowels(const char *text) {
    int count = 0;

    while (*text != '\0') {
        if (isalpha(*text) && islower(*text)) {
            char current = *text;
            char next = *(text + 1);

            if ((current == 'a' || current == 'e' || current == 'i' || current == 'o' || current == 'u') &&
                (next == 'a' || next == 'e' || next == 'i' || next == 'o' || next == 'u')) {
                count++;
            }
        }
        text++;
    }
    return count;
}

void main() 
{
    char text[1000];

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    int occurrences = countSuccessiveVowels(text);

    printf("Number of occurrences of any two vowels in succession: %d\n", occurrences);
}
