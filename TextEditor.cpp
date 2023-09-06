#include <stdio.h>
#include <string.h>
int main() {
    char str[100] = "";
   
    /*scanf_s("%99s", str, sizeof(str));
   printf("Your text: %s\n", str); */

    //int chislo;
    //scanf_s("%d", &chislo);
    //printf("Your number: %d", chislo);

    char choice;

    printf("Enter a number (1-3): ");
    scanf_s("%c", &choice);

    switch (choice) {
    case '1':
        printf("Enter text to append.\n");
        char add[100];
        scanf_s("%s", add, sizeof(add));
        
        str[sizeof(str) - 1] = '\0';
        strcat_s(str, add);
        printf("%s", str);
        break;
    case '2':
        printf("You chose option 2.\n");
        break;
    case '3':
        printf("You chose option 3.\n");
        break;
    case '4':
        printf("You chose option 4.\n");
        break;
    case '5':
        printf("You chose option 5.\n");
        break;
    case '6':
        printf("You chose option 6.\n");
        break;
    case '7':
        printf("You chose option 7.\n");
        break;
    default:
        printf("Invalid choice.\n");
    }
    return 0; 
}