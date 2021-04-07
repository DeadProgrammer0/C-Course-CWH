#include <stdio.h>
#include <stdlib.h>

void rand_array(int asize,int* array){

        printf("\n");
        for (int j = 0; j < asize; j++)
        {
            array[j] = rand() % 100;
        }
}




int main()
{
    // Using malloc to allocate values in an Array.
   
    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        
        printf("Enter a number to stored in %d index of Array : ",i);
        scanf("%d",&ptr[i]);

    }

    printf("\n");

    for (int j = 0; j < 3; j++)
    {
        printf("The value at %d index of Array is %d.\n",j,ptr[j]);
    }
    
    // Using calloc to allocate values in an Array.

    int *ptr;
    ptr = (int *)calloc(3,sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        
        printf("Enter a number to stored in %d index of Array : ",i);
        scanf("%d",&ptr[i]);

    }

    printf("\n");

    for (int j = 0; j < 5; j++)
    {
        printf("The value at %d index of Array is %d.\n",j,ptr[j]);
    }
    
    // Using realloc for a simple Array program.

    int *array;
    int  asize;
    char inp[5];
    
    printf("Enter the size of Array : ");
    scanf("%d",&asize);

    array = (int*)malloc(asize * sizeof(int));

    printf("\nPress \"r\" to get Random Values in Array\nPress \"i\" to increase size of array.\n");

    inputArray:    
        for (int i = 0; i < asize; i++)
        {
            
            printf("Enter the value to stored at %d index of the Array : ",i);
            scanf("%s",&inp);
            
            if (*inp == 'r')
            {
                rand_array(asize,array);
                break;
            }
            
            else if (*inp == 'q')
            {
                printf("\nEnter the new size of Array : ");
                scanf("%d",&asize);
                array = (int*)realloc(array,asize * sizeof(int));
                goto inputArray; 
            }
            
            else {
                sscanf(inp,"%d",&array[i]);
            }
            
        }
    
    printf("\n");

    

    for (int k = 0; k < asize; k++)
    {
        printf("The value at %d index of the Array is %d.\n",k,array[k]);
    }
    free(array);

        

    return 0;
}