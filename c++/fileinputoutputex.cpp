#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    /* code */
    string s;
    ofstream write;
    write.open("fileex1.txt");
    write<<"enter the name 1 "<<endl;
    write<<"enter the name 2 "<<endl;
    write<<"enter the name 3 "<<endl;
    write<<"enter the name 4 "<<endl;

    ifstream read;
    read.open("fileex1.txt");
    // read>>s;
    while (read.eof()==0)
    {
        /* code */
        getline(read,s);
        cout<<s<<endl;
    }
    
    return 0;
}
