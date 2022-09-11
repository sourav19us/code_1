#include <iostream>

using namespace std;

//>>>>>>>>>>>>>>>>>> Dynamic initialization of objects using constructors <<<<<<<<<<<<<<<<

class bank
{
    int prin;
    int years;
    float rate;
    float amount;

public:
    bank()
    {
        prin = 0;
        years = 0;
        rate = 0;
        amount = 0;
    }
    bank(int x, int y, float z);//<<<<<<<<<<<<<<<<<<<<
    bank(int x, int y, int z);//<<<<<<<<<<<<<<<<<<<
    void print();
};

bank::bank(int x, int y, float z)//<<<<<<<<<<<<<
{
    prin = x;
    years = y;
    rate = z;
    amount = (x * (1 + y * z));
}

bank::bank(int x, int y, int z)//<<<<<<<<<<<<
{
    prin = x;
    years = y;
    rate = z;
    amount = (x * (1 + (y * ((float)z/100))));
}

void bank::print()
{
    cout<<"Principal = "<<prin<<", years = "<<years<<" ,rate = "<<rate<<endl;
    cout<<" total amount "<<amount<<" after "<<years<<" year"<<endl;
}

int main()
{
    /* code */
    bank c1,c2;
    int t;
    int a,b,d;
    float c;
    cout<<"Enter 1 for rate in float "<<endl<<"Enter 2 for rate int "<<endl;
    cin>>t;
    switch (t)
    {
    case 1:
        /* code */
        cout<<"enter principal "<<endl;
        cin>>a;
        cout<<"enter years "<<endl;
        cin>>b;
        cout<<"enter rate "<<endl;
        cin>>c;
        c1=bank(a,b,c);
        c1.print();
        break;
    case 2:
        /* code */
        cout<<"enter principal "<<endl;
        cin>>a;
        cout<<"enter years "<<endl;
        cin>>b;
        cout<<"enter rate "<<endl;
        cin>>d;
        c2=bank(a,b,d);
        c2.print();
        break;
    default:
        break;
    }
    

    return 0;
}
