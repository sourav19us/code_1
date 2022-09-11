#include<iostream>
#include<cstring>
#include<fstream>// for files

using namespace std;

int main()
{
    /* code */
    string str=" hllo sourav ";
    string str1;
    int a=0;

    //>>>>>>> for wirte a file <<<<<<<

    ofstream out("fileex.txt");
    out<<(++a);
    out<<str;
    out<<"\n";
    out<<(++a);
    out<<str;
    out<<"\n";
    out<<(++a);
    out<<str;
    out<<"\n";

    //>>>>>>>>>> for read a file <<<<<<<<<<<<
    ifstream in("fileex1.txt");
    // in>>str1;// if we not use getline functin  than out taxe is only first word of taxe file
    // cout<<str1; 
    getline(in,str1);// for get toal line texe
    cout<<str1; 
    
    return 0;
}

/*
    These are some useful classes for working with files in C++

        > fstreambase
        > ifstream --> derived from fstreambase
        > ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

        > Using the constructor
        > Using the member function open() of the class
*/
