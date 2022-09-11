#include<iostream>

using namespace std;

class empl{
    int id;
    string name;
    public:
    // static int b;
    string str="car_and_car_P.LT";
    empl(int id,string na){
        this->id=id;
        name=na;        
        get();
    }
    // static void set();
   

    void get(){
        cout<<" id = "<<id<<endl;
        cout<<" name = "<<name<<endl;
        cout<<" company = "<<str<<endl;
    }

    empl(empl &o1){
        id=o1.id;
        name=o1.name;
        get();
    }

    // ~empl()
    // {
    //     cout<<" destructor call "<<endl;
    // }

};

//  static void empl::set()
//     {
//         // b=5;
//         cout<<"b = "<<b<<endl;
//     }   

struct sosu
{
    int a;
    float b;
    void sum(){
        cout<<" a+b = "<<a+b<<endl;
    }
};

union uni
{
    int a;
    float b;
    void get(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
    void sum(){
        cout<<" a+b = "<<a+b<<endl;
    }
};


int main(){
    cout<<"\n\n*********** for class ************"<<endl;
    empl obj(10245,"sourav kumar saini");
    // empl obj2();
    // empl::set();
    empl obj4(obj);

    cout<<"\n\n*********** for structure ************"<<endl;
    struct sosu obj3;
    obj3.a=1425;
    obj3.b=425.26;
    obj3.sum();
    cout<<" size of obj3 = "<<sizeof(obj3);

    cout<<"\n\n*********** for union ************"<<endl;
    union uni obj7;
    obj7.a=100;
    obj7.get();
    obj7.sum();
    cout<<" size of obj7 = "<<sizeof(obj7);
    return 0;
}