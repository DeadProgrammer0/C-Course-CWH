#include <stdio.h>

int avg(int array[],int size){
    int avgs = 0;
    for (int i = 0; i < size; i++)
    {
        avgs += array[i];
    }
    printf("Average is = %d",avgs/size);
}

int max(int*ptr,int size){
    int max = 0,min = *(ptr+0);
    for (int i = 0; i < size; i++)
    {
        if (*(ptr+i) > max)
        {
            max = *(ptr+i);
        }
        if (*(ptr+i) < *(ptr+i+1) && *(ptr+i) < min)
        {
            min = *(ptr+i);
        }
    }    
    printf("Min = %d\nMax = %d",min,max);
}


int main(){
    
    int x[] = {4,222,5,22,62,7};
    max(x,sizeof(x)/sizeof(int));

    return 0;
}