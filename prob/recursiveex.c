#include<stdio.h>
int function(int num)
{
    if (num==1 || num==0)
    {
        return 1;
    }
    else
    {
        return (num*function(num-1));
    }
}
int main()
{
    /* code */
    int n;
    printf("enter the num\n");
    scanf("%d",&n);
    printf("your enter no is %d \n enter no fectro.... is %d",n,function(n));
    return 0;
}
