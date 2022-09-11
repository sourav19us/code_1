#include <stdio.h>
int main()
{
    /* code */
    int fib[25];
    fib[1] = 0;
    fib[2] = 1;
    printf(" %d \n %d \n" ,fib[1],fib[2]);
    for (int i = 3; i < 25; i++)
    {
        /* code */
        fib[i] = (fib[i - 1] + fib[i - 2]);
        printf(" %d \n", fib[i]);
    }

    return 0;
}
