#include<iostream>

using namespace std;
// ***************static data**************

class student
{
    int id;
    static int c;
    public:
    void stdid();
    void display();
    static void get()
    {
        cout<<"std no is "<<c<<endl;// only static data display output
        //cout<<"std id is"<<id;  sow error 
    }

};


void student::stdid()
{
    cout<<"enter std id "<<endl;
    cin>>id;
    c++;
}

void student::display()
{
    cout<<"std id is "<<id<<" std num is "<<c<<endl;
    
}
/*static void student::get()
{
    
}
*/
int student::c; // c = 0 by difolat ********* "static student::c=1000"

int main()
{
    /* code */
    student sourav,shubham,varun;
    sourav.stdid();
    sourav.display();
    student::get();

    shubham.stdid();
    shubham.display();
    student::get();

    varun.stdid();
    varun.display();
    student::get();

    return 0;
}
