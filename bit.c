#include <stdio.h>

int main() {
    int num, pos;
    printf("Enter a binary number (as decimal): ");
    scanf("%d", &num);
    printf("Enter the bit position to change: ");
    scanf("%d", &pos);
    num = num | (1 << pos);  
    printf("Modified number: %d\n", num);
    return 0;
}
