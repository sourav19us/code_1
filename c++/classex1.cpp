#include<iostream>

using namespace std;

class student
{
    private:
     int a,b,c;
    public:
     int d,e;
    void sum(int a1,int a2,int a3);// function of classs
    void sum1();// function of classs
    /*
        function con diff in class and out said of class
        for in said
        ex :- *********"void sum1()
                        {
                            cout<<"value of a is "<<a<<endl;
                            cout<<"value of b is "<<b<<endl;
                            cout<<"value of c is "<<c<<endl;
                            cout<<"value of d is "<<d<<endl;
                            cout<<"value of e is "<<e<<endl;
                            
                        }
                        "

    */
};

void student::sum(int a1,int a2,int a3)
{
    a=a1;
    b=a2;
    c=a3;
}

void student::sum1()
{
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
    cout<<"value of c is "<<c<<endl;
    cout<<"value of d is "<<d<<endl;
    cout<<"value of e is "<<e<<endl;
    
}

int main()
{
    /* code */
    student sourav;
    sourav.d=65;
    sourav.e=548;
    sourav.sum(2,6,9);
    sourav.sum1();
    return 0;
}
