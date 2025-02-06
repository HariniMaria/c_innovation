#include <stdio.h>

int main() {
    int num, choice, rev = 0, temp;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number
    temp = num;

    // Menu for user to select loop type
    printf("Choose loop type:\n");
    printf("1. For loop\n");
    printf("2. While loop\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Switch case to handle loop selection
    switch (choice) {
        case 1:
            // Reverse the number using a for loop
            for (; temp > 0; temp /= 10) {
                rev = rev * 10 + temp % 10;
            }
            
            // Print the digits in the correct order
            printf("Digits in order (For loop): ");
            for (; rev > 0; rev /= 10) {
                printf("%d ", rev % 10);
            }
            break;

        case 2:
            // Reverse the number using a while loop
            while (temp > 0) {
                rev = rev * 10 + temp % 10;
                temp /= 10;
            }

            // Print the digits in the correct order
            printf("Digits in order (While loop): ");
            while (rev > 0) {
                printf("%d ", rev % 10);
                rev /= 10;
            }
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
