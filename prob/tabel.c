#include<stdio.h>
int main()
{
    /* code */
    int num;
    printf("enter the num\n");
    scanf("%d",&num);
    printf("tabel of %d is /n",num);
    for (int i = 0; i < 11; i++)
    {
        /* code */
        printf("%d X %d = %d\t\t\n",num,i,num*i);
    }
    
    return 0;
}
