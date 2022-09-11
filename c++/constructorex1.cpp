#include<iostream>

using namespace std;

//******************* constructor overloading ***********
//******************
class cost
{
    int a,b;
    public:
    cost(int x,int y);//<<<<<<<<---------
    cost(int t);//<<<<<<<<<<<<<<<-----------
    cost();//<<<<<<<<<<<<<<<<<<--------------
    void printf();
};

cost::cost(int x,int y)
{
    a=x;
    b=y;
} 

cost::cost(int t)
{
    a=t;
    b=0;
} 

cost::cost()
{
    a=0;
    b=0;
}

void cost::printf()
{
 cout<<"a + b ="<<a<<" + "<<b<<" = "<<(a+b)<<endl;
}


int main()
{
    /* code */
    cost c1(1,9),c2(8);//****************
    c1.printf();
    c2.printf();
    cost c3;
    c3.printf();
    return 0;
}

