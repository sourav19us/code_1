#include<iostream>

using namespace std;

// Pointing base class pointer to derived class

class base
{
    int a;
    public:

    void set(int x)
    {
        a=x;
    }

    void get()
    {
        cout<<"base class"<<endl;
        cout<<"a = "<<a<<endl;
    }
};

class draive : public base
{
    int b;
    public:
    void set(int y)
    {
        b=y;
    }
    
    void get()
    {
        cout<<"draive class"<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main()
{
    /* code */
    base * ptr;
    base b1;
    draive d1;
    ptr = &d1;//// Pointing base class pointer to derived class
    ptr->set(45);
    ptr->get();

    draive *ptr1;
    ptr1=&d1;
    ptr1->set(65);
    ptr1->get();

    return 0;
}
