#include<iostream>

using namespace std;

/////////----------->>>>>>>>>> Multilevel Inheritance <<<<<<<<<-------------/////////////

class Gf
{
    int a;
    public:
    void seta()
    {
        a=10;
    }
    int geta()
    {
        return a;
    }

};

class Fa : public Gf //<<<<<<<<<<<<<<<<<<<
{
    int b;
    public:
    void setb()
    {
        //seta();
        b=4;
    }
    int getb()
    {
        return b;
    }
    void printa()
    {
        cout<<"a = "<<geta()<<endl;
    }

};

class Ch : public Fa //<<<<<<<<<<<<<<<<<<<
{
    int c;
    public:
    void setc()
    {
        c=88;
    }
    void printabc()
    {
       // printa();
        cout<<"a = "<<geta()<<endl;
        cout<<"b = "<<getb()<<endl;
        cout<<"c = "<<c<<endl;
    }
};

int main()
{
    /* code */
    Ch c1;
    c1.seta();
    c1.setb();
    c1.setc();
    c1.printabc();
    return 0;
}
