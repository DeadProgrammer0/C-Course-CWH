#include <stdio.h>  


int fact(int x){

    if (x == 0||x == 1){
        return 1;
    }

    else{
        return (x * fact(x-1));
    }


}

int fib(int x){

    if (x==0){
        return 0;
    }
    else if (x==1){
        return 1;
    }

    else{
        return fib(x-1) + fib(x-2);
    }
}


int main() {

    int y;
    printf("Enter a number : ");
    scanf("%d",&y);

    printf("\nThe Factorial of %d is %d.",y,fact(y));
    printf("\nThe Fibunacci at place %d is %d.",y,fib(y));

    return 0;
}