#include <stdio.h>
#include <string.h>
#define MAX 100
struct EMPLOYEE{
    char name[50];
    char designation[50];
    char gender[10];
    char doj[15];
    float salary;
};
void totalEmployees(int n) {
    printf("\nTotal Employees: %d\n", n);
}
void countGender(struct EMPLOYEE emp[], int n) {
    int male = 0, female = 0, i;
    for (i = 0; i < n; i++) {
        if (strcmp(emp[i].gender, "Male") == 0 || strcmp(emp[i].gender, "male") == 0)
            male++;
        else
            female++;
    }
    printf("\nMale   : %d\n", male);
    printf("Female : %d\n", female);
}
void salaryAbove10000(struct EMPLOYEE emp[], int n) {
    int i, found = 0;
    printf("\nEmployees with Salary > 10,000:\n");
    for (i = 0; i < n; i++) {
        if (emp[i].salary > 10000) {
            printf("Name: %s | Salary: %.2f\n", emp[i].name, emp[i].salary);
            found++;
        }
    }
    if (!found)
        printf("No employees found.\n");
}
void asstManagers(struct EMPLOYEE emp[], int n) {
    int i, found = 0;
    printf("\nEmployees with Designation 'Asst Manager':\n");
    for (i = 0; i < n; i++) {
        if (strcmp(emp[i].designation, "Asst Manager") == 0) {
            printf("Name: %s | Salary: %.2f\n", emp[i].name, emp[i].salary);
            found++;
        }
    }
    if (!found)
        printf("No employees found.\n");
}
void main() {
    struct EMPLOYEE emp[MAX];
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d :\n", i + 1);
        printf("Name        : "); scanf(" %[^\n]", emp[i].name);
        printf("Designation : "); scanf(" %[^\n]", emp[i].designation);
        printf("Gender      : "); scanf(" %[^\n]", emp[i].gender);
        printf("Date of Join: "); scanf(" %[^\n]", emp[i].doj);
        printf("Salary      : "); scanf("%f", &emp[i].salary);
    }
    printf("\nRESULTS : ");
    totalEmployees(n);
    countGender(emp, n);
    salaryAbove10000(emp, n);
    asstManagers(emp, n);
}
