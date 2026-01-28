/*
length > 8
pass must have special character & 
character with one upper case

*/
#include <stdio.h>
#include <string.h>

void checker(char pass[]);

int main() {
    char pass[15];

    printf("\nEnter The Password: ");
    fgets(pass, 15, stdin);

    // Remove newline added by fgets
    pass[strcspn(pass, "\n")] = '\0';

    checker(pass);
    return 0;
}

void checker(char pass[]) {
    int i, len = 0, upper = 0, symbol = 0;

    for (i = 0; pass[i] != '\0'; i++) {
        len++;

        // Check uppercase (A-Z)
        if (pass[i] >= 'A' && pass[i] <= 'Z') {
            upper++;
        }

        // Check symbol ranges
        if ((pass[i] >= 33 && pass[i] <= 47) ||
            (pass[i] >= 58 && pass[i] <= 64) ||
            (pass[i] >= 91 && pass[i] <= 96) ||
            (pass[i] >= 123 && pass[i] <= 126)) {
            symbol++;
        }
    }

    // Validation messages
    if (len < 8) {
        printf("\nThe Length Is Less Than 8 Characters.....\n");
    }
    if (upper < 1) {
        printf("\nEnter 1 Upper Case Character Atleast...\n");
    }
    if (symbol < 1) {
        printf("\nEnter 1 Symbol Atleast....\n");
    }

    // Success message
    if (len >= 8 && upper >= 1 && symbol >= 1) {
        printf("\nStrength Is 4(✨✨✨✨) Stars Plus..\n");
    }
}