#include<iostream>
#include<map>
#include<string>

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>> map <<<<<<<<<<<<<<

using namespace std;

int main()
{
    /* code */
    map<string, int> mapname;//<<<<<<<<<<<<<<<<<< map syntex <<<<<<<<<<<
    mapname["sourav"]=46;//<<<<<<<<<<<<<<<<<<<<
    mapname["shubham"]=45;
    mapname["varun"]=485;

    mapname.insert({{"kuntal",56},{"gourav",345},{"ankit",234}});//<<<<<<<<<<<<<< insert value >>>>>>>

    map<string, int> :: iterator itr;//<<<<<<<<<<<<<<<<<<<<<<
    for (itr=mapname.begin(); itr!=mapname.end(); itr++)//<<<<<<<<<<<<<<<<<
    {
        /* code */
        cout<<(*itr).first<<"  ";//<<<<<<<<<<<<<<<<<<<<<<
    }
    
    cout<<endl;

    for (itr=mapname.begin(); itr!=mapname.end(); itr++)//<<<<<<<<<<<<<<<<<<<<<
    {
        /* code */
        cout<<(*itr).first<<"  "<<(*itr).second<<" "<<endl;//<<<<<<<<<<<<<<<<<<<
    }

    cout<<"size is"<<mapname.size()<<endl;//<<<<<<<<<<<<<<<<<
    cout<<"max size is "<<mapname.max_size()<<endl;//<<<<<<<<<<<<<<<
    return 0;
}
