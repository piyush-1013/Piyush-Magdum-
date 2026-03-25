#include <stdio.h>
int strLength(char s[])
{
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}
void strReverse(char s[], char rev[]) 
{
    int len = strLength(s);
    int i;
    for (i = 0; i < len; i++)
        rev[i] = s[len - 1 - i];
    rev[len] = '\0';
}
int strEqual(char a[], char b[]) 
{
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') 
    {
        if (a[i] != b[i]) return 0;
        i++;
    }
    return (a[i] == '\0' && b[i] == '\0');
}
int isPalindrome(char s[]) 
{
    int len = strLength(s);
    int i;
    for (i = 0; i < len / 2; i++) 
    {
        if (s[i] != s[len - 1 - i]) return 0;
    }
    return 1;
}
int isSubstring(char text[], char pattern[])
{
    int tLen = strLength(text);
    int pLen = strLength(pattern);
    int i, j;
    for (i = 0; i <= tLen - pLen; i++) {
        j = 0;
        while (j < pLen && text[i + j] == pattern[j])
            j++;
        if (j == pLen) return 1;
    }
    return 0;
}
void main() 
{
    char str[100], rev[100], str2[100], sub[100];
    int choice;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("\n--- String Operations Menu ---\n");
    printf("1. Length of string\n");
    printf("2. Reverse of string\n");
    printf("3. Equality check (two strings)\n");
    printf("4. Palindrome check\n");
    printf("5. Substring check\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) 
    {
        printf("\nLength of \"%s\" = %d\n", str, strLength(str));
    }
    else if (choice == 2) 
    {
        strReverse(str, rev);
        printf("\nReverse of \"%s\" = \"%s\"\n", str, rev);
    }
    else if (choice == 3) 
    {
        printf("Enter second string: ");
        scanf("%s", str2);
        if (strEqual(str, str2))
            printf("\nStrings are EQUAL.\n");
        else
            printf("\nStrings are NOT equal.\n");
    }
    else if (choice == 4) 
    {
        if (isPalindrome(str))
            printf("\n\"%s\" IS a palindrome.\n", str);
        else
            printf("\n\"%s\" is NOT a palindrome.\n", str);
    }
    else if (choice == 5)
    {
        printf("Enter substring to search: ");
        scanf("%s", sub);
        if (isSubstring(str, sub))
            printf("\n\"%s\" IS found in \"%s\".\n", sub, str);
        else
            printf("\n\"%s\" is NOT found in \"%s\".\n", sub, str);
    }
    else
    {
        printf("\nInvalid choice!\n");
    }
}
