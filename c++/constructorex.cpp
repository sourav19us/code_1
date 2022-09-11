#include<iostream>

using namespace std;

class sourav
{
    int a,b;
    public:
    sourav(int x,int y);// ex of parameterized constructors
    /*
    sourav(void)// difault constructor
        {
            a=10;
            b=34;
        }
    */
    void print()
    {
        cout<<"a + bi = "<<a<<" + "<<b<<"i"<<endl;
    }
};

sourav::sourav(int x,int y)
{
    a=x;
    b=y;
}

int main()
{
    /* code */
    sourav c1(5,6),c2(6,8),c3(4,1);//******************
    c1.print();
    c2.print();
    c3.print();
    return 0;
}
