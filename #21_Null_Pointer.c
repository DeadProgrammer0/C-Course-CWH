#include <stdio.h>

int main()
{
    int array[10] = {1,2,3,2,3};
    int * ptr;

    for (int i = 0; i < 5; i++)
    {
        if (array[i] == 3)
            ptr = NULL;
        else
            ptr = &array[i];
            
        if (ptr != NULL)
        {
            printf("\nThe vaule of a is %d\n",*ptr);
        }
    
        else
        {
            printf("\nThe Pointer ptr is a NULL Pointer.\n");
        }

    }
    


    return 0;
}