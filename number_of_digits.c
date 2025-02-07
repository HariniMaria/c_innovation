#include <stdio.h>

int main() {
    int num, count = 0, temp;

    // Getting input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle the case when the input number is 0
    if (num == 0) {
        count = 1;
    } else {
        temp = num; // Store the number in temp

        // Loop to count digits
        while (temp > 0) {
            temp /= 10; // Remove the last digit
            count++;    // Increase the digit count
        }
    }

    // Print the number of digits
    printf("Number of digits: %d\n", count);

    return 0;
}
