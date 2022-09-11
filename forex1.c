#include<stdio.h>
int main()
{
    /* code */
    int i,j,num;
    printf("enter the num\n");
    scanf("%d",&num);
    for ( i = 0, j = 0; i <= num, j <= num; i++, j++)
    {
        /* code */
        if (i%5==0,j%5==0)
        {
            /* code */
           printf("%d \t %d \n",i,j); 
        }
      
    }
    
    return 0;
}
