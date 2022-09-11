#include<iostream>

using namespace std;

//>>>>>>>>>>>>> Single Inheritance <<<<<<<<<<<<<<<<<<<<<<<<<

class base
{
    int a;
    public:
    int b;
    void set()
    {
        a=55;
        b=99;
    }
    int seta()
    {
        return a;
    }
    int setb()
    {
        return b;
    }
};

class draive : public base// <<<<<<<<<<<<<<<<<<<
{
    int c;
    public:
    int setd()
    {
       return c=(seta()*b);
    }
    void print()
    {
        cout<<" a = "<<seta()<<" b = "<<setb()<<" c = "<<setd()<<endl;
    }

};


int main()
{
    /* code */
    draive c1;
    c1.set();
    c1.setd(); 
    c1.print();
    return 0;
}
