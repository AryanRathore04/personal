#include<stdio.h>
struct employee
{
int empid;
float salary;
char name[30];
};

   int main()
{
    struct employee e1 = {2169, 2800.29,"Ram"};
    
    printf("empid of employee is=%d\n", e1.empid);
    printf("Salary of employee is=%.2f\n", e1.salary);
    printf("Name of employee is=%s\n", e1.name);
    return 0;
}