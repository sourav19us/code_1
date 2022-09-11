#include<iostream>                                                                                                                                                                                                                                                          
#include<iomanip>
using namespace std;
int main()
{
    /* code */
    int a=45;
    const int b=65;
    cout<<"value   of a is :- "<<a<<endl;
    cout<<"value   of b is :- "<<b<<endl;
    a=965;
    //b=55; that sow error bez b is constant value of not be change
    cout<<"change value of a is :- "<<a<<endl;
    int c;
    c=(((a/4)+4)-(b*7));
    cout<<"c = "<<c<<endl;
    
    //float d=45.44f;
    //long double e=966.35L;

    return 0;
}
 /************ Note in file name also you not use c++ resarve char ***********/
