#include<iostream>

using namespace std;

class complex
{
    int a,b;
    public:
    void set_deta(int x,int y)
    {
        a=x;
        b=y;
    }

    void get_deta()
    {
        cout<<" a = "<<a<<endl;
        cout<<" b = "<<b<<endl;
    }
};

int main()
{
    /* code */
    complex c1;
    complex *ptr = &c1;
    // (*ptr).set_deta(1,5);// aslo give result
    // (*ptr).get_deta();
    ptr->set_deta(5,9);// >>>>>>>>>>>>  Arrow operator <<<<<<<<<<<<<
    ptr->get_deta();

    // Array of Objects
    complex *ptr1 = new complex[4];// complex[4] ==== array of objectes 
    ptr1->set_deta(55,98);// objectes 1
    ptr1->get_deta();
    (ptr1+1)->set_deta(55,98);// objectes 2
    (ptr1+1)->get_deta();

    return 0;
}
