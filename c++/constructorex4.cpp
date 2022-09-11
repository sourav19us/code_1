#include<iostream>

using namespace std;

class numb
{
    int n;
    public:
    numb()
    {
        n=0;
    }
    numb(int x)
    {
        n=x;
    }
    // copy constructor<<<<<<<<<<<<<-----------------
    numb(numb &obj)// this copy constructor not req bcz class have by default capy constructor
    {
        n=obj.n;
    }
    void print()
    {
        cout<<"value of n is "<<n<<endl;
    }
};

int main()
{
    /* code */
    numb c1,c2(43);
    c1.print();
    c2.print();
    numb c3(c2);// numb c3=c2  <<<<<<<<<<<<<<------------------
    c2.print();
    numb c4=c2;//<<<<<<<<<<<<<-------------------
    c4.print();
    return 0;
}
