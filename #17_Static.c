#include <stdio.h>
#include <string.h>

int sum(int a,int b){
    static int c;
    int d = c;
    c = a + b;
    c = c + d;
    return c;
}

int main()
{
    printf("%d\n",sum(1,4));
    printf("%d\n",sum(1,4));
    printf("%d\n",sum(1,4));
    printf("%d\n",sum(1,4));
    printf("%d\n",sum(1,4));
    return 0;
}