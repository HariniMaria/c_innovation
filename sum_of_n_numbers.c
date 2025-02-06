#include <stdio.h>

int main() {
    int sum = 0, i, n, choice;

   
   
    printf("Choose the loop type:\n");
    printf("1. For loop\n");
    printf("2. While loop\n");
    printf("3. Do-while loop\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    
    switch (choice) {
        case 1:
            
            sum = 0;  
            for (i = 1; i <= n; i++) {
                sum += i;  
            }
            printf("The value of the sum of the first %d numbers (using for loop) is: %d\n", n, sum);
            break;

        case 2:
            
            sum = 0;  
            i = 1;     
            while (i <= n) {
                sum += i;  
                i++;      
            }
            printf("The value of the sum of the first %d numbers (using while loop) is: %d\n", n, sum);
            break;

        case 3:
            
            sum = 0;  
            i = 1;     
            do {
                sum += i;  
                i++;       
            } while (i <= n);  
            printf("The value of the sum of the first %d numbers (using do-while loop) is: %d\n", n, sum);
            break;

        default:
            
            printf("Invalid choice! Please select 1, 2, or 3.\n");
            break;
    }

    return 0;
}
