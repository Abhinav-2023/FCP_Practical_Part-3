#include <stdio.h>
#include <stdbool.h>

bool isValidCreditCard(const char *creditCardNumber) {
    int sum = 0;
    int length = 0;

    for (int i = 0; creditCardNumber[i] != '\0'; ++i) {
        if (creditCardNumber[i] >= '0' && creditCardNumber[i] <= '9') {
            int digit = creditCardNumber[i] - '0';

            if (length % 2 == 1) {
                digit *= 2;
                if (digit > 9) {
                    digit -= 9;
                }
            }

            sum += digit;
            ++length;
        }
    }

    return (length > 0) && (sum % 10 == 0);
}

void main() {
    char creditCardNumber[17];

    printf("Enter the Credit Card number (16 digits): ");
    scanf("%s", creditCardNumber);

    if (isValidCreditCard(creditCardNumber)) {
        printf("Valid Credit Card number.\n");
    } else {
        printf("Invalid Credit Card number.\n");
    }
}