#include <stdio.h>
#include <string.h>

int main()
{
    int a = 250;
    float b = 25.5;
    char c[10] = "Harry";
    void *ptr;

    ptr = &a;

    // Can't dereference a void pointer directly
    // printf("The value of a is %d",*ptr);

    // Typecasting into int
    printf("The value of a is %d\n", *((int *)ptr));

    // Typecasting into float
    ptr = &b;
    printf("The value of b is %f\n",*((float *)ptr));

    // Typecasting into char
    ptr = &c;
    printf("The value of c is ");
    for (int i = 0; i < strlen(c); i++)
    {
        printf("%c",*((char *)ptr + i));
        
    }
    printf("\n");
    
    return 0;
}