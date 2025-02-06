#include <stdio.h>

int main() {
    char choice;

    printf("Enter a character: ");
    scanf("%c", &choice);

    
    choice = (choice >= 'A' && choice <= 'Z') ? choice + ('a' - 'A') : choice;

    
    switch (choice) {
        case 'a':
            printf("%c is a vowel.\n", choice);
            break;
        case 'e':
            printf("%c is a vowel.\n", choice);
            break;
        case 'i':
            printf("%c is a vowel.\n", choice);
            break;
        case 'o':
            printf("%c is a vowel.\n", choice);
            break;
        case 'u':
            printf("%c is a vowel.\n", choice);
            break;
        default:
            
            if (choice >= 'a' && choice <= 'z') {
                printf("%c is a consonant.\n", choice);
            } else {
                printf("%c is not an alphabet.\n", choice);
            }
    }

    return 0;
}
