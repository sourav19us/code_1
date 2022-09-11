#include<stdio.h>
int main()
{
    /* code */
    int t,i;
    float a,temp;
    for ( i = 0; i < 6; i++)
    {
        /* code */
        printf("%d slect the convert \n ",i);
        printf("to convert C to K Enter 1\n to convert C to F Enter 2\n ");
        printf("to convert F to C Enter 3\n to convert C to K Enter 4\n ");
        printf("to convert K to C Enter 5\n to convert K to F Enter 6\n ");
        printf("enter the cord to convert\n");
        scanf("%d",&t);
    switch (t)
        {
            case 1:
                /* code */
                printf("enter the temp iN C\n");
                scanf("%f",&a);
                temp=(a*(9/5)+32);
                printf("temp in K is %.2f\n",temp);
                break;
            case 2:
                /* code */
                printf("enter the temp iN C\n");
                scanf("%f",&a);
                temp=(a+273.15);
                printf("temp in F is %.2f\n",temp);
                break;
            case 3:
                /* code */
                printf("enter the temp iN F\n");
                scanf("%f",&a);
                temp=(a-32)*(5/9);
                printf("temp in C is %.2f\n",temp);
                break;
            case 4:
                /* code */
                printf("enter the temp iN F\n");
                scanf("%f",&a);
                temp=(((a-32)*(5/9))+273.15);
                printf("temp in K is %.2f\n",temp);
                break;
            case 5:
                /* code */
                printf("enter the temp iN K\n");
                scanf("%f",&a);
                temp=(a-273.5);
                printf("temp in C is %.2f\n",temp);
                break;
            case 6:
                /* code */
                printf("enter the temp iN K\n");
                scanf("%f",&a);
                temp=(a-273.15)*(5/9);
                printf("temp in F is %.2f\n",temp);
                break;                
            default:
                break;
        }
    }
    return 0;
}
