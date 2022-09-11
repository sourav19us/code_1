#include<stdio.h>

int main()
{
    /* code */
    int result;
    printf("enter your result is \n");
    scanf("%d",&result);
    switch (result)
    {
    case 45:
        printf("your result is good");
        break;
    case 65:
        printf("your result is very good");
        break;
    case 85:
        printf("your result is high");
    default:
        break;
    }
    return 0;
}
