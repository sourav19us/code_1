#include<iostream>
 
using namespace std;
///////// >>>>>>>>>>> Mulyiple Inharitance <<<<<<<<<<<<<<<<<
class num_a
{
    int a;
    public:

    void set_a(int x)
    {
        a=x;
    }

    int get_a()
    {
        return a;
    }
};

class num_b
{
    int b;
    public:

    void set_b(int y)
    {
        b=y;
    }

    int get_b()
    {
        return b;
    }
};

class num_c : public num_a , public num_b ///<<<<<<<<<<<< Mulyiple Inharitance  syntex <<<<<<<<<<
{
    int c;
    public:

    void set_c(int z)
    {
        c=z;
    }

    void print()
    {
        cout<<" a = "<<get_a()<<endl;
        cout<<" b = "<<get_b()<<endl;
        cout<<" c = "<<c<<endl;
    }
};

int main()
{
    /* code */
    num_c c1;
    c1.set_a(15236);
    c1.set_b(692);
    c1.set_c(558);
    c1.print();
    return 0;
}

//-------->>>>>>>>>>>>>>>>>>> SYNTEX <<<<<<<<<<<<<<<<<----------
//
// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };
