#include <stdio.h>
#include <string.h>

typedef union choice
{
    int true;
    int false;

} Choice;


int main()
{
    Choice choice;
    choice.true = 1;
    printf("%d\n",choice.true);
    choice.false = 0;
    printf("%d\n",choice.false);
    printf("%d\n",choice.true);

    return 0;
}