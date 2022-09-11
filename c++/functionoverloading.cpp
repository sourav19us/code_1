#include<iostream>

using namespace std;
//***********************Ex Of Function Overloading***********************
int mul(int a,int b)
{
    return (a*b);
}

int mul(int a,int b,int c)
{
    return (a*b*c);
} 

int mul(int a,int b,int c,int d)
{
    return (a*b*c*d);
}

int main()
{
    /* code */
    int a,b,c,d;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of d"<<endl;
    cin>>b;
    cout<<"enter the value of c"<<endl;
    cin>>c;
    cout<<"enter the value of d"<<endl;
    cin>>d;
    cout<<"a * b is "<<mul(a,b)<<endl;
    cout<<"a * b * c is "<<mul(a,b,c)<<endl;
    cout<<"a * b * c * d is "<<mul(a,b,c,d)<<endl;
    return 0;
}
