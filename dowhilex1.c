#include<stdio.h>
int main()
{
    int num, i=0;
    printf("enter the num \n");
    scanf("%d",&num);
    printf("num squens\n");
    do
    {
        /* code */
        printf("%d\n",i);
        i=i+1;
    } 
    while (i<=num);
    return 0;
}
