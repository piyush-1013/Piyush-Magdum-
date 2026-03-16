#include <stdio.h>
float add(float a, float b)
{
    return a + b;
}
float subtract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}
float divide(float a, float b) 
{
    if (b == 0) 
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}
int factorial(int n) 
{
    if (n < 0) 
    {
        printf("Error: Factorial of negative number is not possible\n");
        return -1;
    }
    int result = 1;
    int i;
    for (i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
int main()
{
    int choice;
    float a, b;
    int n;
        printf("\n CALCULATOR MENU \n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Factorial\n");
        printf("6. Exit\n");
        printf("Enter your choice between 1 to 6: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result: %.2f + %.2f = %.2f\n", a, b, add(a, b));
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result: %.2f - %.2f = %.2f\n", a, b, subtract(a, b));
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result: %.2f * %.2f = %.2f\n", a, b, multiply(a, b));
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result: %.2f / %.2f = %.2f\n", a, b, divide(a, b));
                break;
            case 5:
                printf("Enter a non-negative integer: ");
                scanf("%d", &n);
                if (n >= 0)
                    printf("Factorial of %d = %d\n", n, factorial(n));
                break;
            case 6:
                printf("Exited from program \n");
                break;
            default:
                printf("Invalid choice, Please enter between 1 and 6.\n");
        }
    return 0;
}

