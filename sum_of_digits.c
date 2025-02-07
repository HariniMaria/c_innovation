#include <stdio.h>

int main() {
    int num, sum = 0, temp, digit;

   
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; 

    printf("Sum of digits: ");

   
    for (; temp > 0; temp /= 10) {
        digit = temp % 10; 
        sum += digit; 

        printf("%d", digit); 

        if (temp / 10 > 0) { 
            printf(" + ");
        }
    }

    
    printf(" = %d\n", sum);

    return 0;
}
