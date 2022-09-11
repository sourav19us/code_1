#include<iostream>

using namespace std;

int sawpnum(int *a,int *b);

int sawpnum2(int &a,int &b);

int main()
{
    /* code */
    int a,b;
    cout<<"enter the value of a is "<<endl;
    cin>>a;
    cout<<"enter the value of b is "<<endl;
    cin>>b;
    sawpnum(&a,&b);// call by value
    cout<<"sawp value of a is "<<a<<" & b is "<<b<<endl;
    sawpnum2(a,b);// call by reference
    cout<<"sawp value of a is "<<a<<" & b is "<<b<<endl;
    return 0;
}

int sawpnum(int* x,int* y)
{
    int temp =*x;
    *x=*y;
    *y=temp;
}

int sawpnum2(int &p,int &q)
{
    int temp = p;
    p=q;
    q=temp;
}
