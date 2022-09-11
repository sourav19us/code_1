#include<iostream>
using namespace std;

int main()
{
    int a=23;
    int *b=&a;
    cout<<"value that *b store is "<<*b<<endl;
    cout<<"addrese of a that stor b is "<<b<<endl;
    cout<<"addre of b is "<<&b<<endl;
    int *arr = new int[3];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    // cout<<"*(arr++) = "<<*(arr++)<<endl;
    // cout<<"*(arr++) = "<<*(arr++)<<endl;
    // cout<<"*(arr++) = "<<*(arr++)<<endl;
    cout<<"*(arr+0) = "<<*(arr+0)<<endl;
    cout<<"*(arr+1) = "<<*(arr+1)<<endl;
    cout<<"*(arr+2) = "<<*(arr+2)<<endl;
    return 0;
}