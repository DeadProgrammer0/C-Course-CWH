#include <stdio.h>

int main() {
    
    // printf("Printing Hello 10 times.\n");

    // for (int i=0;i<10;++i){
    //     printf("Hello\n");
    // }

    // char source[] = "This is an example.";

    // for (int i = 0; i < sizeof(source); i++) {

    //     printf("%c", source[i]);

    //     if (source[i] == 'n'){
    //         break;
    //     } 
    // }
    
    // int i=0;

    // do {
    //     printf("This is a Do loop!\n");
    //     ++i;

    // } while(i<5);

    // return 0;

    // while (1)
    // {   
    //     int x;
    //     printf("Enter a number : ");
    //     scanf("%d",&x);

    //     if (x<100)
    //     {
    //         printf("Number is less then 10!\n");
    //         continue;
    //     }
        

    //     if (x>100)
    //     {
    //         break;
    //     }
        

    // }

    
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);

    
    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n",x,i,x*i);
    }
    

}   