#include<stdio.h>
int main()
{
    /* code */
    int num, i=0;
    printf("enter the num \n");
    scanf("%d",&num);
    do
    {
        /* code */
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        i=i+1;
        
    } while (i<=num);
    
    return 0;
}
