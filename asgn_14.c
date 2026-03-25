#include <stdio.h>
#include <math.h>

void main()
{
    int binary;
    int decimal = 0, i = 0, remainder,temp;

    printf("Enter binary number: ");
    scanf("%d", &binary);

    temp = binary;

    while (temp != 0)
      {     
        remainder = temp % 10;   
        decimal=decimal + remainder * pow(2, i);  
        temp=temp /10;           
        i++;
    }

    printf("Decimal = %d\n", decimal);
}
