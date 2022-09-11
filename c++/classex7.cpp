#include<iostream>

using namespace std;

//***********Passing Objects*************

class complex
{
    int a,b;
    public:
    void get(int x,int y);
    void print();
    void sumcomplex(complex o1,complex o2)//********************Passing Objects function
    {
        a=o1.a + o2.a;
        b=o1.b + o2.b;
        cout<<" sum of tow complex num is "<<a<<"+"<<b<<"i"<<endl;
    }
};

void complex::get(int x,int y)
{
    a=x;
    b=y;
}

void complex::print()
{
    cout<<"a + bi = "<<a<<" + "<<b<<"i"<<endl;
}



int main()
{
    /* code */
    complex c1,c2,c3;
    c1.get(1,2);
    c1.print();

    c2.get(5,8);
    c2.print();

    c3.sumcomplex(c1,c2);//*****************Passing Objects 
    return 0;
}
