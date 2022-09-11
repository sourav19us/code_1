#include<iostream>

using namespace std;
// >>>>>>>>>>>>>>>>>>>> Construvtore in Derived class <<<<<<<<<<<<<<<<<<<<<
class base1
{
    int a,b;
    public:
    base1(int x1,int y1)
    {
        a=x1;
        b=y1;
        cout<<"constructore of base1 colled"<<endl;
        cout<<"a = "<<a<<" , b = "<<b<<endl;
    }

};

class base2 
{
    int c,d;
    public:
    base2(int x2,int y2)
    {
        c=x2;
        d=y2;
        cout<<"constructo  of base2 colled"<<endl;
        cout<<"c = "<<c<<" , d = "<<d<<endl;

    }

};

class dravie : public base1 , public base2
{
   int e,f;
   public:
   dravie(int t1,int q1 ,int t2,int q2,int t3,int q3 ):base1(t1,q1),base2(t2,q2) // <<<<<<-----------
   {
       e=t3;
       f=q3;
       cout<<"constructo  of dravie colled"<<endl;
       cout<<" e = "<<e<<" , f = "<<f<<endl;
   }
};

int main()
{
    /* code */
    dravie c1(1,2,3,4,5,6);
    return 0;
}
