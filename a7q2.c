#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    int code;
    char name[50];
    float salary;
    char department[50];
    struct Date joining_date;
};
int main() 
{
    struct Employee employees[10];
    for (int i=0; i<10; i++) 
    {
        printf("Enter information for Employee %d:\n", i+1);
        printf("Employee Code: ");
        scanf("%d", &employees[i].code);
        printf("Employee Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Department number: ");
        scanf("%s", employees[i].department);
        printf("Joining Date (Day Month Year): ");
        scanf("%d %d %d", &employees[i].joining_date.day, &employees[i].joining_date.month, &employees[i].joining_date.year);
    }
    printf("\nEmployees with Salary ≥ 10000:\n");
    for (int i = 0; i < 10; ++i) 
    {
        if (employees[i].salary >= 10000) 
        {
            printf("Employee Code: %d, Name: %s, Salary: %.2f, Department: %s, Joining Date: %d/%d/%d\n",
                   employees[i].code, employees[i].name, employees[i].salary,
                   employees[i].department, employees[i].joining_date.day,
                   employees[i].joining_date.month, employees[i].joining_date.year);
        }
    }
    return 0;
}