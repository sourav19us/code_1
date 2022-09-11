#include<iostream>
using namespace std;

int ficto(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*ficto(n-1);
    }
}
int main()
{
    /* code */
    int a,b=1;
    cout<<" a = ";
    cin>>a;
    for (int i = 1; i <= a; i++)
    {
        /* code */
        b=b*i;
    }
    printf("%d! = %d",a,b);
    int y= ficto(a);
    cout<<" a! = "<<y;
    return 0;
}
