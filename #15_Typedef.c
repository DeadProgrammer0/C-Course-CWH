#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[25];
    int salary;
    char time[15];
    char job[25];
} Employee;



int main()
{
    typedef unsigned long ul;
    ul a,b;
    typedef int i;
    i c = 29, d;
    printf("%d\n",c);

    Employee Emp1;
    strcpy(Emp1.name,"Rakesh");
    Emp1.salary = 20000;
    strcpy(Emp1.time,"9 to 5");
    strcpy(Emp1.job,"Manager");

    printf("Name - %s\nSalary - %d\nTime - %s\nJob - %s\n",Emp1.name,Emp1.salary,Emp1.time,Emp1.job);

    return 0;
}