#include <iostream>
using namespace std;
int main()
{
    /* code */
    int a;
    cout << "enter the value of a " << endl;
    cin >> a;
    int* c=&a;
    cout << "value of a is " << a << endl;
    cout << "add of a is " << &a << endl; // & = store add
    cout << "value of add that  c is store " << c << endl;
    cout << "add of c is " << &c << endl;
    cout << "value of 'a' that store in 'c'  is " << *c << endl; // *c = value of 'a' , print at out put

    /*
     ***********Pointer to Pointer********************
     */

    int** b = &c;
    cout<<"add of 'c' that store b is "<<b<<endl;
    cout<<"value in b is "<<**b<<endl; 
    return 0;
}
