#include<stdio.h>
int main()
{
    /* code */
    int i, age;
    for ( i = 0; i < 10; i++)
    {
        printf("%d enter your age\n",i);
        scanf("%d",&age);
        if (age>10)
        {
            /* code */
            break;
        }
        printf("playing your game");
        
    }
    printf("your game is over");
    return 0;
}
