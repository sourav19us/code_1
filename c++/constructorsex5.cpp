#include<iostream>

using namespace std;
// >>>>>>>>>>>>>>>>>>  Initialization list in constructors  <<<<<<<<<<<<<<
class test
{
    int a;// int b;
    int b; // int a;
    public:
    // test(int x,int y):a(x),b(y) /// <<<<<<<<<<
    // test(int x,int y):a(x+3),b(y*4)// <<<<<<<<<<
    // test(int x,int y):a(x+b),b(y+1) /// <<<<<<<<<<<<<< it work if int b; write first int a;
    test(int x,int y):a(x+3),b(y+a) /// <<<<<<<<<<<<<<
    {
        cout<<" contructors work "<<endl;
        cout<<"a = "<<a<<endl;
        cout<<"b= "<<b<<endl;

    }
}; 

int main()
{
    /* code */
    test c1(2,5);
    return 0;
}
