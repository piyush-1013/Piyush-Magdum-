#include<stdio.h>

struct student
{
    char name[20];
    int r_no;
    float m1, m2;
};

int main()
{
    int i;
    struct student s[10];

    printf("Enter students details:\n");

    for(i=0; i<3; i++)
    {
        printf("\nEnter name: ");
        scanf(" %s", s[i].name);

        printf("Enter roll no.: ");
        scanf("%d", &s[i].r_no);

        printf("Enter Marks (2 subjects): ");
        scanf("%f %f", &s[i].m1, &s[i].m2);
    }

    printf("\n--- Student Details ---\n");

    for(i=0; i<3; i++)
    {
        printf("\nName: %s\n", s[i].name);
        printf("Roll no.: %d\n", s[i].r_no);
        printf("Marks of 1st subject: %.2f and 2nd subject: %.2f\n", s[i].m1, s[i].m2);
        printf("Result (Average): %.2f\n", (s[i].m1 + s[i].m2)/2);
    }

    return 0;
}
