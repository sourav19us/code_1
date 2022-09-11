#include<iostream>
using namespace std;
int mult(int c, int d);//********** Ex of function prototypes  ************
void g(); // ******* "void g(void)" bothe same **********
int sum(int a,int b) //********* Ex of function *****************
{
    cout<<"sum of "<<a<<" and "<<b<<" is "<<(a+b)<<endl;
}

int main()
{
    /* code */
    int n1 , n2;
    cout<<"enter the n1 value"<<endl;
    cin>>n1;
    cout<<"enter the n2 value"<<endl;
    cin>>n2;
    sum(n1,n2);
    mult(n1,n2);
    g();
    return 0;
}
int mult(int c,int d)//*********** Ex of function prototypes **************
{
    cout<<c<<" * "<<d<<" = "<<(c*d)<<endl;
}
void g()
{
    cout<<"\n hi it's me";
}