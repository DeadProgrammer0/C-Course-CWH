#include <stdio.h>
#include <string.h>


int main()
{
    char str1[20] = {'H','e','l','l','o','\0'};
    // gets(str1);
    printf("%s\n",str1);
    puts(str1);


    // Functions
    char s1[20] = "Hello",s2[20] = "Harry";
    printf("%s %s\n",s1,s2);

    strcat(s1," ");
    strcat(s1,s2);
    puts(s1);

    return 0;
}