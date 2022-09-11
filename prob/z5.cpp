#include<iostream>
#include<string>
using namespace std;

#define cube(x) x*x*x
int main()
{
    /* code */
    int a,y,r,sum=0;
    cout<<"enter the num"<<endl;
    cin>>a;
    y=a;
    while (a>0)
    {
        r=a%10;
        sum=sum+cube(r);
        a=a/10;
    }
    if(y==sum)
    {
        cout<<"num is a tru";
    }
    else
    {
        cout<<"not";
    }
    return 0;
}
