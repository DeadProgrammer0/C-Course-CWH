#include <stdio.h>      


int sum(int a, int b)
{
    return a + b;
}

float si(float p,float r,float t){

    return (float)(p*r*t)/100;
}

void stars(){
    printf("*****");
}
int main() {

    int x;
    x = sum(12,312);
    printf("%d\n",x);

    float y = si(600,6.5,2);
    printf("%f\n",y);

    stars();

    return 0;
}

