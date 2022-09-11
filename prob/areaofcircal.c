#include<stdio.h>
int main()
{
    /* code */
    int i;
    float r,area, pi=3.14;
    for ( i = 0; i < 5; i++)
    {
        printf("%d enter the radius value in meter\n",i);
        scanf("%f",&r);
        if (r<0)
        {
            /* code */
            printf("radius value most be greater than zero\n");
            continue;
        }
        else
        {
        area=pi*r*r;
        printf("circal area is %.3f m^2 \n",area);
        }
    }
    
    return 0;
}
