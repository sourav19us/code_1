#include<stdio.h>
int d; //   d is global variable that can be use in other funtion also
int main()
{
    /* code */
    int a=1,c=2; // a and c is local varialble that can not use in other funtion
    typedef int it; // int name is allso call by it
    it b=2;
    printf("b value is %d\n",b);
    printf("b value is %d\n",a);
    man();
    return 0;
}
int man()
{
    /* code */
    d=551;
    printf("d value is %d\n",d);
    return 0;
}
