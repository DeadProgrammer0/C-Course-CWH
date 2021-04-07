// #include <stdio.h>
// #include "temp.c"


// extern int var;

// extern void pprint();

// int value = 20;

// char c = 'a';

// void cprint(){
//    extern char c;
//    printf("The Character is %c\n",c);
// }

// int main()
// {
//    cprint();
//    printf("%d\n",var);  
//    pprint();

//    return 0;

// }


#include <stdio.h>


int increment(int num) {  
   static int mynum;

   mynum = mynum  + num+1;
   
   return mynum;
}


int main()
{
   // auto is default
   auto int a =1;
   printf("%d\n",a);

   printf("The number is %d\n",increment(10));
   printf("The number is %d\n",increment(10));
   printf("The number is %d\n",increment(10));
   printf("The number is %d\n",increment(10));
   return 0;
}