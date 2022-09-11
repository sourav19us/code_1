#include<stdio.h>
int main()
{
    /* code */
    int i;
    printf("enrter no\n");
    scanf("%d",&i);
    printf("your enter no in %d \n for eixt enter no 5\n",i);
    for (int a = 0; a < 10; a++)
    {
        /* code */
        printf(" %d\n",i*a);
         if (i==5)
        {
            /* code */
            goto end;
        }
    }
    end:
    printf("you exit");
    return 0;
}
