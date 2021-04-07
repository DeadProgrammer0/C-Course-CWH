// #include <stdio.h>

// void rev(int array1[]){
//     int array2[10];

//     for (int i = 6, x = 0; i >= 0; i--,x++)
//     {
//         array2[x] = array1[i];
//     }

//     for (int i = 0; i < 7; i++)
//     {
//         array1[i] = array2[i];
//     }

// }

// void arrayPrint(int array[],int asize){
//     for (int i = 0; i < asize; i++)
//     {
//         printf("%d\n",array[i]);
//     }

// }

// int main()
// {
//     int x[] = {1,2,3,4,5,6,7};

//     printf("Before - \n");
//     arrayPrint(x,7);
//     rev(x);
//     printf("After - \n");
//     arrayPrint(x,7);

//     return 0;
// }

////---------------------------------------------------------------------------------------------

// #include <stdio.h>

// void straight(size){
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

// }

// void reverse(size){
//     for (int i = size; i > 0; i--)
//     {
//         for (int j = i; j > 0; j--)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int type,size;
//     printf("Enter the 0 or 1 : ");
//     scanf("%d",&type);
//     printf("Enter Number of Stars : ");
//     scanf("%d",&size);
//     if (type == 0)
//     {
//         straight(size);
//     }
//     else if (type == 1)
//     {
//         reverse(size);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int index = 0;
    int inside = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            inside = 0;
            continue;
        }
        else if (string[i] == '>')
        {
            inside = 1;
            continue;
        }

        if (inside == 1)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    while (string[0] == ' ')
    {
        for (int j = 0; j < strlen(string); j++)
        {
            string[j] = string[j + 1];
        }
    }

    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char mystr[50] = "<h1>     This is my Tag.     </h3>";

    parser(mystr);

    printf("--%s--\n", mystr);

    return 0;
}