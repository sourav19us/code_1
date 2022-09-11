#include<stdio.h>
void new(int *x ,int *y)
{
    int s,f;
    s=*x+*y;
    f=*x-*y;
    *x=s;
    *y=f;
    return ;
}
int main()
{
    /* code */
    int a,b;
    printf("enter value of a is \n");
    scanf("%d",&a);
    printf("enter value of b is \n");
    scanf("%d",&b);
    new(&a,&b);
    printf("a = %d \n b = %d",a,b);
    return 0;
}
