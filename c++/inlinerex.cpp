#include<iostream>

using namespace std;

int sum(int a,int b);

int mul(int x,int y=5)// defoult arguments read line 23,24;
{
    return x*y;
}

int main()
{
    /* code */
    int a,b;
    cout<<"enter the value of a and b is"<<endl;
    cin>>a>>b;
    cout<<"a + b = "<<sum(a,b)<<endl;
    cout<<"a + b = "<<sum(a,b)<<endl;
    cout<<"a + b = "<<sum(a,b)<<endl;
    cout<<"a + b = "<<sum(a,b)<<endl;
    cout<<"a + b = "<<sum(a,b)<<endl;
    cout<<"a * 5 ="<<mul(a)<<endl;
    cout<<"a * 50 ="<<mul(a,50)<<endl;
    return 0;
}

inline int sum(int a,int b)// Ex of inliner function ***** inline function put 'a+b' at "sum(a,b)" so opertion run faster
{
    return a+b;
}


