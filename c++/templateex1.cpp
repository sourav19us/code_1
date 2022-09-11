#include<iostream>

using namespace std;

//>>>>>>>>>>> Template with multiple parameters <<<<<<<<<<<<<<<<<

// template < class d1,class d2,class d3 ,......................>

template < class d1,class d2>//<<<<<<<<<<<<<<<<<<<<<<<<

class data
{
    d1 a;
    d2 b;
    public:
    data(d1 x,d2 y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<" a = "<<a<<", b = "<<b<<endl;
    }
};

int main()
{
    /* code */
    data <int ,char> o1(4,'t');//<<<<<<<<<<<<<<<
    o1.display();

    data <char,float> o2('s',45.36);//<<<<<<<<<<<<<<
    o2.display();
    return 0;
}
