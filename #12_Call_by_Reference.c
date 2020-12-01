#include <stdio.h>

int add(int*a,int*b){

    int c;
    c = *a + *b;
    return c;
}

int sub(int*a,int*b){

    int c;
    c = *b -*a;
    return c;
}

int main(){
    
    int a = 34, b = 36;
    printf("Before : %d | %d\n",a,b);
    printf("After : %d | %d\n", add(&a,&b), sub(&a,&b) );

    return 0;
}