#include<iostream>

using namespace std;

//>>>>>>>>>>>>>>>>> Delete and new keywords <<<<<<<<<<<<<

int main()
{
    /* code */
    int a=55;
    int* ptr =&a;//<<<<<<<<<<<<<<
    cout<<" store value by pointer 'ptr' is "<<*(ptr)<<endl;
    int *p=new int(9);//<<<<<<<<<<<<<<<<<
    cout<<" store value by pointer 'p' is "<<*(p)<<endl;
    int *arr = new int[3];//<<<<<<<<<<<<<<
    arr[0]=1;
    arr[1]=16;
    arr[2]=19;
    // delete p; // <<<<<<<<<<<<<   delete p === delete pointer "p"
    // delete[] arr; ///   <<<<<<<<<<<<<<<
    cout<<" arr[0] ="<<arr[0]<<endl;
    cout<<" arr[1] ="<<arr[1]<<endl;
    cout<<" arr[2] ="<<arr[2]<<endl;
    
    return 0;
}
