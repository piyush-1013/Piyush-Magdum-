#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void main() 
{
    int num;
    srand(time(0));
    num=rand();
    printf("Random numbers : %d\n",num);
}
