#include <stdio.h>

int main() {
    int rows, cols;

    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <=i; j++) {
            printf("%d ",j+1);
        }
        printf("\n"); 
    }

    return 0;
}
