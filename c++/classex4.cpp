#include<iostream>

using namespace std;
//************arrays********

class shop
{
    private:
    int n;
    int itmeid[100];
    int itmeprise[100];
    public:
    void itmeid1();
    //void itmeprise();
    void display();
};
void shop::itmeid1()
{
    cout<<"enter the itmes num "<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<"enter itme no "<<(i+1)<<" itmeid "<<endl;
        cin>>itmeid[i];
        cout<<"enter itme no "<<(i+1)<<" itmepraise "<<endl;
        cin>>itmeprise[i];
    }
    
}

void shop::display()
{
    //void itmeid1();
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<"itme "<<(i+1)<<" itme id is "<<itmeid[i]<<" and itme praise "<<itmeprise[i]<<endl;
    }
    
}

int main()
{
    /* code */
    shop dhukan;
    dhukan.itmeid1();
    dhukan.display();
    return 0;
}
