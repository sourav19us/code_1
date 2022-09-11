#include<iostream>

using namespace std;

// *************** Friend Function ******************

class complex 
{
    int a,b;
    // "friend complex sum(complex o1,complex o2);"--> this is also work
    public:

    friend complex sum(complex o1,complex o2);

    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void get()
    {
        cout<<" a + bi = "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sum(complex o1,complex o2)
{
    complex c3;
    c3.set((o1.a+o2.a),(o1.b+o2.b));
    return c3;
}

int main()
{
    /* code */
    complex c1,c2,s;
    c1.set(1,5);
    c1.get();

    c2.set(5,9);
    c2.get();

    s=sum(c1,c2);// sum is freind function con not call by "s.sum(c1,c2);"
    s.get();
    return 0;
}
