#include<stdio.h>
#define pi 3.14
#define squr(x) x*x
int main()
{
    float A,r;
    float s;
    r=52;
    A=(pi*squr(r));
    printf("pi value is %.2f\n",pi);
    printf("area of circul is %.2f\n",A);
    printf("squr of %.2f is %.2f\n",r,squr(r));
    
    return 0;
}
