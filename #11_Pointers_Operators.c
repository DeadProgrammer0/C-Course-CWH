#include <stdio.h>

int main(){    
    int array[] = {1,2,3,4,5};
    int* pt = array;


    printf("%d\n",pt+2);
    printf("%d\n",&array[2]);
    printf("%d\n",*pt+4);
    printf("%d\n",array[4]);

    return 0;
}

