#include<stdio.h>
int main()
{
    /* code */
    int a[5]={1,5,8,2,9};
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",&a[0]);
    printf("%d\n",&a[2]);
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("enter the value of a[%d] is %d\n",i,a[i]);
        printf("adder of array element %d is %d\n",i,&a[i]);
    }
    
    return 0;
}

