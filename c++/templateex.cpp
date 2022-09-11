#include<iostream>

using namespace std;

//>>>>>>>>>>>>>>>>>>>>  template ex    <<<<<<<<<<<<<<<<<

template <class t> //<<<<<<<<<<<<<< 

class sum
{
    t a;
    t b;
    public:
    void set(t x,t y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a+b="<<(a+b)<<endl;
    }
};

int main()
{
    /* code */
    sum <int> d1;//<<<<<<<<<<<<<<<< d1 is object  <<<<<<<<<<<<<<<
    d1.set(5,9);
    d1.display();

    sum <float> d2;//<<<<<<<<<<<<<<<< d2 is object  <<<<<<<<<<<<<<<
    d2.set(6.3,9.5);
    d2.display();

    sum <string> d3;//<<<<<<<<<<<<<<<< d3 is object <<<<<<<<<<<<<<<
    d3.set("sourav ","saini");
    d3.display();
    return 0;
}
