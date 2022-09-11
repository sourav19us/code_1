#include<iostream>
#include<fstream>

using namespace std;

//>>>>>>>>>>> close file funtion <<<<<<<<<<

int main()
{
    /* code */
    string s,s1;
    // cout<<"enter the string "<<endl;
    // cin>>s;
    // ofstream file_writr("fileex1.txt");
    // file_writr<<"enter string is :- " + s;

    ifstream file_read("fileex1.txt");
    // file_read>>s1;
    getline(file_read,s1);
    cout<<s1;
    file_read.close();// close file funtion
    return 0;
}
