#include<iostream>

using namespace std;

//>>>>>>>>> Array of object using pointer <<<<<<<<<<<<

class shop
{
    int id;
    float praies;
    public:

    void set(int x,int y)
    {
        id=x;
        praies=y;
    }

    void get()
    {
        cout<<"id = "<<id<<" , praies = "<<praies<<endl;
    }
};

int main()
{
    /* code */
    int size;
    cout<<" enter the size of array"<<endl;
    cin>>size;
    shop *ptr = new shop[size];//<<<<<<<<<<<<<<<<<<

    /// >>>>>>>>>>THIS IS ALSO WORK >>>>>>>>>>>>
    // int q[size],t[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<" enter the itam id "<<(i+1)<<endl;
    //     cin>>q[i];
    //     cout<<" enter the itam praies "<<(i+1)<<endl;
    //     cin>>t[i];
    // }

    int q;
    float t;
    for (int i = 0; i < size; i++)
    {
        cout<<" enter the itam id "<<(i+1)<<endl;
        cin>>q;
        cout<<" enter the itam praies "<<(i+1)<<endl;
        cin>>t;
        (ptr+i)->set(q,t);
    }

    for (int j = 0; j < size; j++)
    {
        /* code */
        (ptr+j)->get();

    }
        
    return 0;
}
