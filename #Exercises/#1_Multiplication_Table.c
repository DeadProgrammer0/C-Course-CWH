#include <stdio.h>

int main()
{
    int number,multiplier;
    multiplier = 1;
    printf("\nEnter a number to get a Multiplication table of it : ");
    scanf("%d",&number);
    printf("\nThe Multiplication Table of %d is :-" ,number);
    printf("\n%d * %d = %d",number,multiplier,number*multiplier);
    multiplier += 1;
    printf("\n%d * %d = %d",number,multiplier,number*multiplier);
    multiplier += 1;
    printf("\n%d * %d = %d",number,multiplier,number*multiplier);
    multiplier += 1;
    printf("\n%d * %d = %d",number,multiplier,number*multiplier);
    multiplier += 1;
    printf("\n%d * %d = %d",number,multiplier,number*multiplier);
    multiplier += 1;
    printf("\n%d * %d = %d",number,multiplier,number*multiplier);
    multiplier += 1;
    printf("\n%d * %d = %d",number,multiplier,number*multiplier);
    multiplier += 1;
    printf("\n%d * %d = %d",number,multiplier,number*multiplier);
    multiplier += 1;
    printf("\n%d * %d = %d",number,multiplier,number*multiplier);
    multiplier += 1;
    printf("\n%d * %d = %d",number,multiplier,number*multiplier);
    multiplier += 1;
    return 0;
}
