#include <stdio.h>

int var = 10;

extern int value;

void pprint(void) {
   printf("This is my Value - %d\n",value);
}