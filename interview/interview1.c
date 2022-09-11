#include<stdio.h>
#include<stdlib.h>
int main()
{
    /* code */
    int a=5,b,c=3,d;
    b=a<<1;
    printf("%d \n",b);
    b=a>>1;
    printf("%d  \n",b);
    d=a&c;
    printf("%d  \n",d);
    d=~a;
    printf("%d  \n",d);
    d=a^c;
    printf("%d  \n",d);
    d=a | c;
    printf("%d  \n",d);
    return 0;
}
