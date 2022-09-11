#include<stdio.h>
#define PI=3.1444
int main()
{
    int a, b;
    float c;
    const float d=8.555;
    a = 2;
    b = 23;
    c=5.256655;
    printf(" d is a const value %f\n",d);/* */
    printf("float value %12.2f that\n",c);/* */
    printf("float value %-12.2f that\n",c);/* */
    printf("value of a is %d \tvalue of b is %d\n",a,b);/* */
    printf("value of a is %d \t\t \n value of b is %d\n",a,b);/* */
    printf("a+b= %d\n a*b= %d\n a-b= %d",a+b,a*b,a-b);/* */
    return 0;
}