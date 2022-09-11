#include<iostream>

using namespace std;

int count=0;
//<<<<<<<-------- destructor .....never take an argument , donot return any value
//............ for many constroctor only "1" destructor req.........
//........... destructor free memory of constructor.............
//...........syntex = ~class_name(){}.........
class num
{
    int a;

    public:
    num()
    {
        count++;
        cout<<"enter in constructor "<<count<<endl;
    }
    num(int x)
    {
        a=x;
        count++;
        cout<<"a value is "<<a<<endl;
        cout<<"enter in constructor "<<count<<endl;
    }

    ~num()//<<<<<<<-------- destructor .....never take an argument , donot return any value
    {
          
        count--;
        cout<<"enter in destructor "<<count<<endl;
    }

};

int main()
{
    /* code */
    cout<<"enter the first object"<<endl;
    num c1;
    {
        cout<<" enter the 2 more object"<<endl;
        num c2,c3,c4(5);
        cout<<" exit to constructor"<<endl;
        cout<<" enter to destructor"<<endl;
    }
    return 0;
}
