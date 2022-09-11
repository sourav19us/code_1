#include<iostream>

using namespace std;

class emplo
{
    private:
    int a,b,c;
    public:
    int d,e;
    void dta(int a1,int a2,int a3);
    void dtap();
    int sum();
};

void emplo::dta(int a1,int a2,int a3)
{
    a=a1;
    b=a2;
    c=a3;
}

void emplo::dtap()
{
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;
    cout<<"e = "<<e<<endl;

}

int emplo::sum()
{
    cout<<"a+b+c+d+e = "<<(a+b+c+d+e)<<endl;
    cout<<"a*b*c*d*e = "<<(a*b*c*d*e)<<endl;
    cout<<"a-b-c-d-e = "<<(a-b-c-d-e)<<endl;
}

int main()
{
    int x,y,z,u,v;
    char name1[25];
    cout<<"enter the name"<<endl;
    cin>>name1;
    cout<<"Name is "<<name1;
    emplo name;
    cout<<"enter x "<<endl;
    cin>>x;
    cout<<"enter y "<<endl;
    cin>>y;
    cout<<"enter z "<<endl;
    cin>>z;
    cout<<"enter u "<<endl;
    cin>>u;
    cout<<"enter v "<<endl;
    cin>>v;
    name.d=u;
    name.e=v;
    name.dta(x,y,z);
    name.dtap();
    name.sum();
    return 0;
}
