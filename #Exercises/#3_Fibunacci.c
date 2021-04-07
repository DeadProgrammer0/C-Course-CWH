#include <stdio.h>

int fib_rec(int n){
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib_rec(n-1) + fib_rec(n-2);
    }
}

int fib_it(int n){
    int f0 = 0,f1 = 1,f2;
    for (int i = 0; i < n; ++i)
    {
        f1 = f0 + f1;
        f0 = f1 - f0;
    }
    return f0;
}

int main()
{
    int x = 10;
    for (int i = 0; i <= x; i++)
    {
        printf("%d ",fib_it(i));
    }
    
    return 0;
}