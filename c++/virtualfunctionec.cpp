#include<iostream>

using namespace std;

/// Vartual functions also see pointerex4.cpp ..../// Pointing base class pointer to derived class 
// for beter now see both program " Vartual functions " and " Pointing base class pointer to derived class "
class base
{
    int a;
    public:

    virtual void set() ////Vartual functions
    {
        a=44;
    }
    
    virtual void get() ////Vartual functions
    {
        cout<<" base class"<<endl;
        cout<<"a = "<<a<<endl;
    }
};

class draive: public base
{
    int b;
    public:
    
    void set()
    {
        b=789;
    }

    void get()
    {
        cout<<" draive class "<<endl;
        cout<<" b = "<<b<<endl;
    }
};

int main()
{
    /* code */
    base *ptrb;
    draive d1;
    ptrb = &d1;
    ptrb->set();
    ptrb->get();
    return 0;
}
