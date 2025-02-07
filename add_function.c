#include <stdio.h>


int num1, num2;


int add() {
    return num1 + num2;
}


int subtract() {
    return num1 - num2;
}

int main() {
    int sum, difference;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    sum = add();
    difference = subtract();

   
    printf("Addition: %d + %d = %d\n", num1, num2, sum);
    printf("Subtraction: %d - %d = %d\n", num1, num2, difference);

    return 0;
}
