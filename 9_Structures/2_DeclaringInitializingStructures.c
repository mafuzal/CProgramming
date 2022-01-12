#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[30];
    char date[15];
    float salary;
};
int main()
{
    /*declare and initialization of structure variable*/
    struct employee emp = {"Miles", "1/11/22", 65002.00f};
    printf("Name: %s\n", emp.name);
    printf("Date: %s\n", emp.date);
    printf("Salary: %.2f\n", emp.salary);

    printf("Enter Employee information: \n");
    printf("Name: \n");
    scanf("%s", emp.name);
    printf("Hire Date: \n");
    scanf("%f", emp.date);
    printf("Salary: \n");
    scanf("%f", &emp.salary);

    printf("Name: %s\n", emp.name);
    printf("Date: %s\n", emp.date);
    printf("Salary: %.2f\n", emp.salary);
    return 0;
}