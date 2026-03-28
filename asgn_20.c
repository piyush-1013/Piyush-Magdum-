#include <stdio.h>
//With pointers
void swapWithPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x, y;
    //Without pointers
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before swap: x = %d, y = %d\n", x, y);
    int temp = x;
    x = y;
    y = temp;
    printf("After swap:  x = %d, y = %d\n", x, y);
    //With pointers(using a function)
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before swap: x = %d, y = %d\n", x, y);
    swapWithPointers(&x, &y);
    printf("After swap:  x = %d, y = %d\n", x, y);
    return 0;
}
