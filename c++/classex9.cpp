#include <iostream>

using namespace std;

// forword declaration 
class complxe;

class addreal
{
    public:
    
    int sumrealcomplex(complxe, complxe);
    //int compsum(complex, complxe);
};

// class addcom
// {
//     public:
    
//     //int sumrealcomplex(complxe, complxe);
//     int compsum(complex, complxe);
// };

class complxe
{
    int a, b;
    // friend int d::compsum(complxe, complxe); // member friend function
    // freinaddreal::sumrealcomplex(complxe, complxe); // member friend function
    friend class addreal;// friend class ----> give full accsess to friend class function
    friend class addcom;
public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void get()
    {
        cout << "a + bi = " << a << " + " << b << "i" << endl;
    }
};

int addreal::sumrealcomplex(complxe o1, complxe o2)
{
    return (o1.a + o2.a);
}

// int addcom::compsum(complxe o1, complxe o2)
// {
//     return (o1.b + o2.b);
// }

int main()
{
    /* code */
    complxe c1,c2;
    c1.set(1,2);
    c2.set(3,9);
    addreal s;
    int r=s.sumrealcomplex(c1,c2);
    cout<<"sum of real part is "<<r;
    return 0;
}
