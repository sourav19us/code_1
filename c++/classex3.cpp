#include<iostream>
#include<string>

using namespace std;

class binnery
{
    string s;// in class  by defult all data private
    void bin_cek();
    public:
    void string();
    void onens();
    void display();
};

void binnery::string()
{
    cout<<"enter no"<<endl;
    cin>>s;
}

void binnery::bin_cek()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='1' && s.at(i)!='0')
        {
            /* code */
            cout<<"enter no is not binnery";
            exit(0);
        }    
    }
    cout<<"enter no is binnery"<<endl;
        
}

void binnery::onens()
{
    bin_cek(); //********** nesting of mamber function
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i)=='1')
        {
            s.at(i)='0';
        }
        else
        {
            s.at(i)='1';
        }
        
    }
    
}

void binnery::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}


int main()
{
    /* code */
    binnery a;
    a.string();
    a.onens();
    a.display();
    return 0;
}
