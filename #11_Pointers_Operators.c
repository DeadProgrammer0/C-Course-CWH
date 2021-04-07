#include <stdio.h>

int main(){    
    int array[] = {100,200,300,400,500};
    int *pt = array;


    printf("%d\n",*(pt+2));
    printf("%d\n",array[2]);
    printf("%d\n",(pt+4));
    printf("%d\n",&array[4]);

    int *ptr = array;

    for (int i = 0; i < 5; i++)
    {
        printf("Address %d : %d\n",i,ptr);
        printf("Value %d : %d\n",i,*ptr);

        ptr++;
    }
    

    return 0;
}

