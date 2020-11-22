#include "stdio.h"

int main() {

    int a = 5;
    int *pt = &a;
    int *pt2  = NULL;

    printf("%p",pt);
    printf("\n%p",pt2);



    return 0;
}
