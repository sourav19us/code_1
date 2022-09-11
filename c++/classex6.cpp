#include<iostream>

using namespace std;

//**************** array of objects *************

class stdu
{
    int id;
    public:
    void setid();
    void getid();
};

void stdu::setid()
{
    cout<<"enter id"<<endl;
    cin>>id;
}

void stdu::getid()
{
    cout<<" id is "<<id<<endl;
}

int main()
{
    stdu fb[4];
    for (int i = 0; i < 4; i++)
    {
        /* code */
        fb[i].setid();
    }
    
    for (int j = 0; j < 4; j++)
    {
        /* code */
        fb[j].getid(); 
    }
    
    return 0;
}
