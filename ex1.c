#include<stdio.h>

int main()
{
    /* if else condition */
    int m, s;
    printf("enter 1 if you pass \n  or \n enter 2 if you not pass \n ");
    printf("enter result of mathes ");
    scanf("%d",&m);
    printf("enter result of sciece ");
    scanf("%d",&s);
    printf("enter your mathes result is %d \n  and \n enter your sciece result is %d\n",m,s);
    if (m==1 && s==1)
    {
        printf("your gift is 45");
    }
    else 
    {
        if (m==1 || s==1)
        {
            printf("your gift if 15");
        }    
        else
        {
            printf("your gift is zero");
        }
    }       
    return 0;
}
