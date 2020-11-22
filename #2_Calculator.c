#include <stdio.h>

void main()
{
    int first,second;
    char op;

    printf("Enter a Arithemetic Operator : ");
    scanf("%c",&op);

    printf("Enter the First Digit : ");
    scanf("%d",&first);

    printf("Enter the Second Digit : ");
    scanf("%d",&second);

    if (op=='+'){
        printf("%d + %d = %d", first,second,first+second);
    }

    if (op=='-'){
        printf("%d - %d = %d", first,second,first-second);
    }
    
    if (op=='*'){
        printf("%d * %d = %d", first,second,first*second);
    }

    if (op=='/'){
        printf("%d / %d = %d", first,second,first/second);
    }
}