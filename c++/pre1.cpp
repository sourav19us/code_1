#include<iostream>

using namespace std;

class base
{
   public:
   int a;
   int b;
   base(int a1, int b1)
   {
       a=a1;
       b=b1;
   }
  base(float a,float b)
  {
      this->a=a;
      this->b=b;
  }
  void get()
  {
      cout<<"a = "<<a<<" b = "<<b<<endl;
  }
};

class draive: public base
{
    public:
    int c;
    int d;
    draive(int x1,int y1 ,int x2 ,int y2):base(x1,y1)
    {
        c=x2;
        d=y2;
    }

    void get()
    {
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"c = "<<c<<endl<<"d = "<<d<<endl;

    }

    void sum()
    {
        int z=a+b+c+d;
        cout<<"sum of a+b+c+d = "<<z<<endl;
    }

};

template <class t1,class t2>
class stdu{
    public:
    t1 a;
    t2 b;
    stdu (t1 a,t2 b)
    {
        this->a=a;
        this->b=b;
    }
    
    template <class x,class y>
    void sum(x x1,y y1)
    {        
        cout<<" a+b "<<(x1+y1)<<endl;
    }
};

int main()
{
    /* code */
    // draive obj(1,2,3,4);
    // obj.get();
    // obj.a=20;
    // obj.get();
    // obj.sum();

    // int a=45;
    // int* b=&a;
    // int**c=&b;
    // cout<<" a = "<<a<<endl;
    // cout<<" value of b is "<<b<<endl;
    // cout<<" address of b is "<<&b<<endl;
    // cout<<" address of a is "<<&a<<endl;
    // cout<<"value store in b is "<<*b<<endl;
    // cout<<"**c value is "<<**c<<endl;
    // cout<<"address store c is "<<c<<endl;

    base obj(2.5f,2.5f);
    obj.get();

    stdu <int ,int> boj1(2,5);
    boj1.sum(2.5,6.5);
    return 0;
}
