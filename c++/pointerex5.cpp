#include<iostream>

using namespace std;

// >>>>>>>>>>>> This Pointer <<<<<<<<<<<<<<<<<

class base
{
    int a;
    public:
    
    base(int a)
    {
        this->a=a;//<<<<<<<<<<<<<<<<< 
    }

    void display()
    {
        cout<<" a = "<<a<<endl;
    }

};

int main()
{
    /* code */
    base o1(5);
    o1.display();
    return 0;
}
