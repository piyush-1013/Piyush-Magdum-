#include<stdio.h>
struct student
{
    char name[20];
    int r_no;
    float m1, m2, m3;
};

void main()
{
    int i;
    struct student s[10];

    printf("Enter students details:\n");

    for(i=0; i<3; i++)
    {
        printf("\n Enter name: ");
        scanf(" %s", s[i].name);

        printf("Enter roll no.: ");
        scanf("%d", &s[i].r_no);

        printf("Enter Marks in 3 subjects: ");
        scanf("%f %f", &s[i].m1, &s[i].m2, &s[i].m3);
    }

    printf("\n Student Details \n");

    for(i=0; i<3; i++)
    {
        printf("\n Name: %s\n", s[i].name);
        printf(" Roll no.: %d\n", s[i].r_no);
        printf(" Total marks: %.2f\n", s[i].m1+s[i].m2+s[i].m3);
        printf(" Result (Average): %.2f\n", (s[i].m1 + s[i].m2 + s[i].m3)/3);
    }
}


