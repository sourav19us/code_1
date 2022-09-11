#include<iostream>

using namespace std;

// >>>>>>>>>>>>>> class template with default parameters <<<<<<<<<<<<<<

template <class d1=int,class d2=float,class d3=char>//<<<<<<<<<<

class data
{
    d1 a;
    d2 b;
    d3 c;
    public:

    data(d1 x,d2 y,d3 z) 
    {
        a=x;
        b=y;
        c=z;
    } 

    void display()
    {
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"c = "<<c<<endl;
    }
};

int main()
{
    /* code */
    data <> o1(44,56.9,'k');//<<<<<<<<<<<<<<<
    o1.display();
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    data <char,int,float> o2('i',8,999.32);//<<<<<<<<<<<<<
    o2.display();
    return 0;
}
