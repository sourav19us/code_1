#include<iostream>

using namespace std;

//>>>>>>>>>>>>>>> template overloading <<<<<<<<<<<<<<

template <class t>

class data
{
    t a;
    public:
    void set(t x)
    {
        a=x;
    }

    void display()
    {
        cout<<"a = "<<a<<endl;
    }
};

int sum(int x,int y) //<<<<<<<<<<<<<<<<<<
{
    cout<<" funtion first x+y= "<<(x+y)<<endl;
}

template <class d1,class d2>//<<<<<<<<<<<<<<<<
int sum(d1 x,d2 y)          //<<<<<<<<<<<<<<<
{
    cout<<"template function call x+y= "<<(x+y)<<endl;
}

int main()
{
    /* code */
    data<int> o1;
    o1.set(5);
    o1.display();
    
    cout<<endl;

    sum(4,9); // exact math takes the highest priority
    cout<<endl;
    sum(9.6,6.3);
    return 0;
}

switch (expression)
{
case /* constant-expression */:
    /* code */
    break;

default:
    break;
}


    