#include<iostream>
using namespace std;
int main()
{
    /* code */
    float r;
    float pi =3.14,Area;
    cout<<"enter the redius \n r =";// << is call insertion operation AND "cout" use for output 
    cin>>r;// >> is call  extraction operation AND "cin" use for input
    Area=pi*r*r;
    cout<<"Area is :-"<<Area;
    cout<<"\n";
    cout<<"Circumference of a Circle is :-"<<(2*pi*r);
    int a;
    int b;
    cout<<"enter the value of a is\n a =";
    cin>>a;
    cout<<"enter the value of b is\n b =";
    cin>>b;
    cout<<"sum of\t"<<a<<"\tand\t"<<b<<"\tis\t"<<a+b;
    return 0;
}

