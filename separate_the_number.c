#include <stdio.h>

int main() {
    int num, choice, rev = 0, temp, digit;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; 

    
    printf("Choose loop type:\n");
    printf("1. For loop\n");
    printf("2. While loop\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            
            for (; temp > 0; temp /= 10) {
                rev = rev * 10 + temp % 10;
            }

            
            printf("Digits in order (For loop): ");
            temp = rev; 
            for (; temp > 0; temp /= 10) {
                printf("%d ", temp % 10);
            }

           
            printf("\nDigits in reverse order (For loop): ");
            for (temp = num; temp > 0; temp /= 10) {
                printf("%d ", temp % 10);
            }
            break;

        case 2:
            
            while (temp > 0) {
                rev = rev * 10 + temp % 10;
                temp /= 10;
            }

            
            printf("Digits in order (While loop): ");
            temp = rev; 
            while (temp > 0) {
                printf("%d ", temp % 10);
                temp /= 10;
            }

           
            printf("\nDigits in reverse order (While loop): ");
            temp = num; 
            while (temp > 0) {
                printf("%d ", temp % 10);
                temp /= 10;
            }
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
