#include<iostream>

using namespace std;
/// >>>>>>>>>>>>>>>>>> Ambiguity resolution in inharitance <<<<<<<<<<<<
// all base class have some member function 
class base1
{
    public:
    void print()///<<<<<<<<<<<<<<<<<<<<<
    {
        cout<<"hllo  sourav"<<endl;
    }
};

class base2
{
    public:
    void print()//<<<<<<<<<<<<<<<<<<<<<<<<<<
    {
        cout<<"hllo  shubham"<<endl;
    }
};

class base3
{
    public:
    void print()///<<<<<<<<<<<<<<<<<<<<<<<<<<<
    {
        cout<<"hllo  varun"<<endl;
    }
};

class dravie1 : public base1 ,public base2 ,public base3 
{
    public:
    void print()//<<<<<<<<<<<<<<<<<<<<< 
    {
        base1::print();
    }

};

class dravie2 : public base1 ,public base2 ,public base3 
{
    public:
    void print()//<<<<<<<<<<<<<<<<<<<<<<<<
    {
        cout<<"hllo sourav , shubham, varun"<<endl;
    }
};

int main()
{
    /* code */
    base1 c1;
    c1.print();
    base2 c2;
    c2.print();
    base3 c3;
    c3.print();
    dravie1 c4;
    c4.print();
    dravie2 c5;
    c5.print();

    return 0;
}
