#include <stdio.h>
#include <string.h>
#include <ctype.h>
void displayMenu() {
    printf("STRING OPERATIONS MENU :           \n");
    printf("1. Find Length       (strlen)      \n");
    printf("2. Copy String       (strcpy)      \n");
    printf("3. Concatenate       (strcat)      \n");
    printf("4. Compare Strings   (strcmp)      \n");
    printf("5. Reverse String    (strrev)      \n");
    printf("6. To Uppercase      (strupr)      \n");
    printf("7. To Lowercase      (strlwr)      \n");
    printf("8. Find Substring    (strstr)      \n");
    printf("9. Palindrome Check  (strcmp)      \n");
    printf("  Enter your choice: ");
}
int main() {
    int choice;
    char str1[20], str2[20], ch;
    do {
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of \"%s\" = %d\n", str1, strlen(str1));
                break;
            case 2:
                printf("Enter source string: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                printf("Copied string: \"%s\"\n", str2);
                break;
            case 3:
                printf("Enter first string:  ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("After concatenation: \"%s\"\n", str1);
                break;
            case 4:
                printf("Enter first string:  ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                int result = strcmp(str1, str2);
                if (result == 0)
                    printf("Strings are EQUAL.\n");
                else if (result < 0)
                    printf("\"%s\" comes BEFORE \"%s\" alphabetically.\n", str1, str2);
                else
                    printf("\"%s\" comes AFTER \"%s\" alphabetically.\n", str1, str2);
                break;
            case 5:
                printf("Enter a string: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                strrev(str2);
                printf("Original: \"%s\"\n", str1);
                printf("Reversed: \"%s\"\n", str2);
                break;
            case 6:
                printf("Enter a string: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                strupr(str2);
                printf("Uppercase: \"%s\"\n", str2);
                break;
           case 7:
                printf("Enter a string: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                strlwr(str2);
                printf("Lowercase: \"%s\"\n", str2);
                break;
            case 8:
                printf("Enter main string:       ");
                scanf("%s", str1);
                printf("Enter substring to find: ");
                scanf("%s", str2);
                char *pos = strstr(str1, str2);
                if (pos)
                    printf("Substring found at position %d.\n", pos - str1);
                else
                    printf("Substring NOT found.\n");
                break;
            case 9:
                printf("Enter a string: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                strrev(str2);
                if (strcmp(str1, str2) == 0)
                    printf("\"%s\" IS a palindrome.\n", str1);
                else
                    printf("\"%s\" is NOT a palindrome.\n", str1);
                break;
            default:
                printf("Invalid choice! Please enter 0-11.\n");
        }
    } while (choice != 9);
    return 0;
}
