#include <stdio.h>
void main()
{
    int a, b, i,gcd,smallest_a,smallest_b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (i = 2; i <= a; i++) 
    {
        if (a % i == 0) {
            smallest_a = i;
            break;
        }
    }
    for (i = 2; i <= b; i++) 
    {
        if (b % i == 0) 
        {
            smallest_b = i;
            break;
        }
    }
    for(i=2;i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("\nSmallest divisor of %d = %d\n", a, smallest_a);
    printf("Smallest divisor of %d = %d\n", b, smallest_b);
    printf("GCD of %d and %d = %d\n", a, b, gcd);
}
