#include<iostream>
using namespace std;

class expl
{
    int a;
    int b;
    public:
    void setdeta(int a)
    {
      this->a=a;
   
    }
    void getdeta()
    {
       cout<<"a = "<<a<<endl;
    }
    void deta()
    {
        cout<<"a*5 = "<<(a*5)<<endl;
    }
    void bdeta()
    {
        b=123;
        cout<<"b = "<<b;
    }

};


int main()
{
    expl obj;
    obj.setdeta(5);
    obj.deta();
    obj.bdeta();
    return 0;
}