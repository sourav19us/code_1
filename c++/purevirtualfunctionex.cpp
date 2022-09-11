#include<iostream>

using namespace std;

//>>>>>>>>> Abstract Base Calss  and  Pure virtual function <<<<<<<<<<<<<<<

// >>>>>>>>>Abstract Base Calss =  base class that have at list one Pure virtual function <<<<<<<<

class base // class base = Abstract Base Calss
{
    protected:
    int a;
    int b;
    public:
    void set(void)
    {
        a=23;
        b=900;
    }

    virtual void display()=0; /// Pure virtual function  
};

class draive : public base
{
    int c;
    public:

    void setd()
    {
        set();
        c=546;
    }

    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
    }
};

int main()
{
    /* code */
    base *ptr;
    draive d1;
    ptr =&d1;
    d1.setd();
    ptr->display();
    return 0;
}
