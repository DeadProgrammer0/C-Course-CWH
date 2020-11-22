#include "stdio.h"

int main() {

    char food;
    printf("Enter what you want to eat : ");
    scanf("%c",&food);

    switch (food)
    {
    case 'H':
        printf("Here is your HamBurger");
        break;
    
    case 'C':
        printf("Here is your Cola");
        break;
    
    case 'P':
        printf("Here is your Pizza");
        break;


    default:
        printf("Your Item is not in Menu");
        break;
    }

    return 0;

    
}

