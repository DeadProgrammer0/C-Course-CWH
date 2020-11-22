#include <stdio.h>
#include <string.h>

int main(){

    int age;

    printf("Enter your Age here : ");
    scanf("%d",&age);
    printf("Your age is %d.\n" ,age);

    if (age>=18 && 75>age){
        printf("\nYou can Vote.\n");
    }
    
    else if (age>4&&age<11){
        printf("\nYour Age is between 5 to 10.\n");
    }
    
    else
    {
        printf("\nYou cannot vote.\n");
    }
    
    // Quiz 
    // Science and Maths = 45 
    // Maths = 15
    // Science = 15

    char sub[100];
    printf("Enter subjects you passsed in : ");
    scanf("%s",&sub);

    if (strcmp(sub,"maths")== 0){
        printf("Passed in Maths.");
        printf("\nPrize = 15");

    }

    if ((strcmp(sub,"science")== 0)){
        printf("Passed in Science.");
        printf("\nPrize = 15");
    }

    
    else if (strcmp(sub,"maths,science")== 0){
        printf("Passed in Math and Science.");
        printf("\nPrize = 45");
    }

    else{
        printf("Invalid Input!");
    }
}   