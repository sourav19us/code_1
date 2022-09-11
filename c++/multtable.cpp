#include<iostream>
using namespace std;
int main()
{
    /* code */
    int a;
    cout<<"enter the value  that table you wont to print of"<<endl;
    cin>>a;
    for (int i = 1; i < 11; i++)
    {
        /* code */
        cout<<a<<" * "<<i<<" = "<<(a*i)<<endl;
    }
    
    return 0;
}
