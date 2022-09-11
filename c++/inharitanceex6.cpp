#include <iostream>

using namespace std;

// >>>>>>>>>>>>     Virtual Base class    <<<<<<<<<<<<<<<

/*
                        A
                        |
                 |<<<<<<|>>>>>>>
                 |             |
                 |             |
                 C             B
                 |             |
                 |>>>>> D <<<<<|
*/

class base
{
    int a;

public:
    void set_a()
    {
        a = 55;
    }

    int get_a()
    {
        return a;
    }
};

class draiv1_base : virtual public base //<<<<<<<<<<<<<<<<<<<<<
{
    int b;

public:
    void set_b()
    {
        b = 69;
    }

    int get_b()
    {
        return b;
    }
};

class draiv2_base : virtual public base // <<<<<<<<<<<<<<<<<<<<<<<<<
{
    int c;

public:
    void set_c()
    {
        c = 856;
    }

    int get_c()
    {
        return c;
    }
};

class draiv3 : public draiv1_base, public draiv2_base
{
    int d;

public:
    void set_d()
    {
        d = 785;
    }

    int get_d()
    {
        return d;
    }

    void print()
    {
        cout << "a = " << get_a() << endl;
        cout << "b = " << get_b() << endl;
        cout << "c = " << get_c() << endl;
        cout << "d = " << get_d() << endl;
        cout << " >>>>>>END<<<<<<<< " << endl;
    }
};

int main()
{
    /* code */
    draiv3 c1;
    c1.set_a();
    c1.set_b();
    c1.set_c();
    c1.set_d();
    c1.print();
    return 0;
}

