#include<iostream>
#include<string>

using namespace std;

class num
{
private:
    string s;
public:
    num(string s);
    string get()
    {
        return s;
    }
    ~num();

};

num::num(string s)
{
    this->s=s;
}

num::~num()
{
}


int main()
{
    /* code */
    string s1;
    cout<<"enter the num "<<endl;
    cin>>s1;
    num o1(s1);
    string s2;
    s2=o1.get();
    int a=0,b;
    b=s2.length();
    cout<<b<<endl;
    for (int i = 0; i < s2.length(); i++)
    {
        /* code */
        cout<<s2[i]<<endl;
        a=(a+(int(s2[i])*int(s2[i])*int(s2[i])));
    }
    cout<<"a = "<<a<<endl;
    
    return 0;
}
