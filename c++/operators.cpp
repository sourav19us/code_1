#include<iostream>
using namespace std;
int main()
{
    /* code */
    int a,b;
    cout<<"enter the value of a is"<<endl;
    cin>>a; 
    cout<<"enter the value of b is"<<endl;
    cin>>b; 
    // Arithmetic Operators
    cout<<"a+b is "<<(a+b)<<endl;// "endl" is end the line , Same Work as \n 
    cout<<"a-b is "<<(a-b)<<endl;
    cout<<"a/b is "<<(a/b)<<endl;
    cout<<"a%b is "<<(a%b)<<endl;
    cout<<"a++ is "<<(a++)<<endl;// output display "a" enter value by user and after "a" value increase by 1
    cout<<"b++ is "<<(b++)<<endl;// output display "b" enter value by user and after "b" value increase by 1
    cout<<"++a is "<<(++a)<<endl;//output display "a" value increase by 1 , let a = 4 than output is a = 5
    cout<<"--b is "<<(--b)<<endl;//output display "b" value dncrease by 1 , let b = 5 than output is b = 4
    // Comparison Operator
    cout<<"a==b is "<<(a==b)<<endl;
    cout<<"a>=b is "<<(a>=b)<<endl;
    cout<<"a<=b is "<<(a<=b)<<endl;
    cout<<"a!=b is "<<(a!=b)<<endl;
    cout<<"a<b is "<<(a<b)<<endl;
    cout<<"a>b is "<<(a>b)<<endl;
    // Logical Operator
    cout<<"(a==b) && (a>=b) is "<<((a==b)&&(a>=b))<<endl;
    cout<<"(a==b) || (a>=b) is "<<((a==b)||(a>=b))<<endl;
    cout<<"!(a==b) is "<<!(a==b)<<endl;

    return 0;
}