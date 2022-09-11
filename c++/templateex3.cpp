#include<iostream>

using namespace std;

// >>>>>>>>>> Function templates  and function templates with parameters <<<<<<<<<<<<

template <class t1,class t2>//<<<<<<<<<<<<<<<<<<<<<<<<<<
void display(t1 x,t2 y)
{
    cout<<" x = "<<x<<endl<<" y = "<<y<<endl;
}

template<class t1=float,class t2,class t3>//<<<<<<<<<<<<<<<<<<<<<<<<<<
t1 sum(t2 q,t3 w) // t1 must be diff 
{
    cout<<"q + w = "<<(q+w)<<endl;
}

int main()
{
    /* code */
    display(5,6);
    display(5.66,6.898);
    display('g',6);
    cout<<endl;
    sum(5,9);
    cout<<endl;
    sum(5.3,89);
    //sum("souorav ","saini"); >>>>>>>>>> error sow 
    return 0;
}
