#include<stdio.h>
int sum(int a, int b)
{
    return a+b;    
}
int star()
{
    int i;
    for ( i = 0; i < 10; i++)
    {
        /* code */
        printf("%c\n",'@');
    }
}
int main()
{
    /* code */
    int c;
    c=sum(2,4);
    printf("sum is %d\n",c);
    star();
    return 0;
}
