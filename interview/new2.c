#include<stdio.h>

#define pi 3.14

#undef s

int main()
{
    int a,b=10;
    printf("enter the a = ");
    scanf(" %d",&a);
    printf("%d \n",(a>=5)?a:b);

    printf(" time is %s \n",__TIME__);
    printf(" date is %s \n",__DATE__);
    printf(" file name is %s \n",__FILE__);
    printf("line is %d \n ",__LINE__);
    printf("stdc is %d \n ",__STDC__);
    return 0;
    printf("hlo");
}

