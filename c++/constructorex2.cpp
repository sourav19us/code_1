#include <iostream>

using namespace std;

class cost
{
    int a, b, c;

public:
    cost(int x, int y = 4, int z = 9) //******constructor with default argument*********
    {
        a = x;
        b = y;
        c = z;
    }
    void printf();
};


void cost::printf()
{
    cout << "a + b + c =" << a << " + " << b << " + " << c << " = " << (a + b + c) << endl;
}

int main()
{
    /* code */
    cost c1(2, 6, 3), c2(5);//***************
    c1.printf();
    cout<<" for object c2"<<endl;
    c2.printf();
    return 0;
}
