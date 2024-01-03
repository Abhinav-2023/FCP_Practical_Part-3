#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 5

struct Employee {
    int employeeId;
    char employeeName[50];
    float employeeSalary;
};

void main() 
{
    struct Employee employees[MAX_EMPLOYEES];
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    for (int i = 0; i < numEmployees; i++) 
    {
        printf("\nEnter details for Employee %d:\n", i);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeId);

        printf("Employee Name: ");
        scanf("%s", employees[i].employeeName);

        printf("Employee Salary: ");
        scanf("%f", &employees[i].employeeSalary);
    }

    printf("\nEmployee Database:\n");
    printf("%-15s %-30s %-15s\n", "Employee ID", "Employee Name", "Employee Salary");
    for (int i = 0; i < numEmployees; i++) 
    {
        printf("%-15d %-30s %-15.2f\n", employees[i].employeeId, employees[i].employeeName, employees[i].employeeSalary);
    }
}
