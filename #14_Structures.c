#include <stdio.h>
#include <string.h>

struct Student
{
    char name[25];
    int class;
    int roll;
    char section;
    int marks;
} Ravi;


int main()
{
    struct Student Harry, Rohan;
    strcpy(Harry.name,"Harry Potter");
    Harry.class = 12;
    Ravi.marks = 80;
    Rohan.roll = 2;
    strcpy(Ravi.name,"Ravi Kumar");

    puts(Ravi.name);
    printf("%s\n",Harry.name);    

    struct Student S1;
    strcpy(S1.name,"Harry");
    puts(S1.name);

    return 0;
}