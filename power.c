#include <stdio.h>

int main() {
    int n, power;
    long  result = 1; 
    
    printf("Enter the base : ");
    scanf("%d", &n);
    printf("Enter the exponent : ");
    scanf("%d", &power);

    
    for (int i = 0; i < power; i++) {
        result *= n;
    }

   
    printf("%d^%d = %ld\n", n, power, result);

    return 0;
}
