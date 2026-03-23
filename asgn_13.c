#include <stdio.h>
void main()
{
    int n, remainder, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        n = -n;
    }
    while (n != 0)
    {
        remainder = n % 10;     
        reversed = reversed * 10 + remainder;  
        n = n / 10;         
    }
    printf("Reversed number: %d\n", reversed);
}
