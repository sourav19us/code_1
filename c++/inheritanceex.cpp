#include<iostream>

using namespace std;

class emply // base class
{
    int a;
    public:
    int b; 
    emply(int x,int y)
    {
        a=x;
        b=y;
    }
    emply()
    {
        a=0;
        b=0;
    }
    void display()
    {
        cout<<"a = "<<a<<" , b = "<<b<<endl;
    }
};
/*
 // Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

*/
class prog : public emply// creat drive class 
{
    int c;
    public:
    prog()
    {
        c=3;
        b=3;
    }
    prog(int z,int q)
    {
        c=z;
        b=q;
    }
    void print()
    {
        cout<<"c = "<<c<<", b = "<<b<<endl;
    }
};

int main()
{
    /* code */
    emply c1(2,9);
    c1.display();
    prog c2(5,3);
    c2.print();
    return 0;
}
/*
    // Derived Class syntax
    class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
    {
        class members/methods/etc...
    }
 Note:

// -->> Default visibility mode is private
// -->> Public Visibility Mode: Public members of the base class becomes Public members of the derived class
// -->> Private Visibility Mode: Public members of the base class become private members of the derived class
// -->> Private members are never inherited

*/
