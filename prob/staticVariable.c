#include<stdio.h>
int fu()
{
    static int b=20;
    b++;
    return b;
}
int fun()
{
    static int b;
    b++;
    return b;
}
int main()
{
    /* code */
    int a;
    a=fu();
    printf("a value is %d\n",a);
    a=fu();
    printf("a value is %d\n",a);
    a=fu();
    printf("a value is %d\n",a);
    a=fu();
    printf("a value is %d\n",a);
    a=fun();
    printf("a value is %d\n",a);
    a=fun();
    printf("a value is %d\n",a);
    a=fun();
    printf("a value is %d\n",a);
    a=fun();
    printf("a value is %d\n",a);
    return 0;
}
