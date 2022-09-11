#include<stdio.h>
#include<math.h>
int main()
{
    int a[3]={5,4,8};
    int b=0;
    for (int i = 2; i >= 0; i--)
    {
        static int j=0;
        b=b+a[i]*(pow(16,j));
        j++;
    }
     printf("%d \n",b);
    // int a=1425696;
    // printf("%d",a);
    return 0;
}