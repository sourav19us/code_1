#include <iostream>
#include<string>

using namespace std;
int main()
{
    /* code */
    string name = "sourav";
    string last_name = " saini";
    string full_name;
    for(int i=0;i<=name.size();i++)
    {
        cout<<name[i]<<endl;
    }

    full_name=(name+last_name);
    cout<<"name+last_name is "<<full_name<<endl;
    cout<<"name+last_name useing append function is "<<(name.append(last_name))<<endl;
    cout<<name.length()<<endl;
    // cout<<name.reserve();
    for (int i = name.length(); i >=0; i--)
    {
        /* code */
        cout<<name[i];
    }
    string fullname;
    cout<<"enter the fullname ";
    cin>>fullname;
    cout<<"enter name is :- "<<fullname;
        cout<<fullname.length();
    for (int i =0; i <=fullname.length(); i++)
    {
        /* code */
        cout<<fullname[i];
    }
    
    return 0;
}