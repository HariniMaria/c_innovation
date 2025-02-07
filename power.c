#include <stdio.h>

int main() {
    int n, power;
    long long result = 1; 
    
    printf("Enter the base (n): ");
    scanf("%d", &n);
    printf("Enter the exponent (power): ");
    scanf("%d", &power);

    
    for (int i = 0; i < power; i++) {
        result *= n;
    }

    
    printf("%d^%d = %lld\n", n, power, result);

    return 0;
}
