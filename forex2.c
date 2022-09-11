#include<stdio.h>
int main()
{
    /* code table of any num */
    int i, num;
    printf("enter the value\n");
    scanf("%d",&num);
    for ( i = 0; i <= 10; i++)
    {
        /* code */
        printf("%d\n",num*i);
    }
    
    return 0;
}
