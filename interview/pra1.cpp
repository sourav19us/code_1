#include<iostream>
using namespace std;

class math{
    int b;
    public:
    int a;
    void set(int a,int b){
        this->a=a;
        this->b=b;
    }
    void get()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
    
    void sum(){
        cout<<"a+b ="<<a+b<<endl;
        
    }
    
    void multypllay(){
        cout<<"a*b = "<<(a*b)<<endl;
        
            }
    
    void divide(){
        cout<<"a/d ="<<a/b<<endl;
        
    }
    
    void moduler(){
        cout<<"a%b = "<<a%b<<endl;
    
    }
    void rightshift(){
        cout<<"right shift is "<<(a>>b)<<endl;
    
    }
    void leftshift(){
        cout<<"left shift is "<<(a<<b)<<endl;
    
    }
    void oRopreater(){
        cout<<"a | b = "<<(a|b)<<endl;
    
    }
    void andopreter(){
        cout<<"a & b ="<<(a&b)<<endl;
    }
};
int main() {
    // Write C++ code here
    // cout << "Hello world!";
    math obj;
    obj.set(100,2);
    obj.get();
    obj.sum();
    obj.multypllay();
    obj.divide();
    obj.moduler();
    obj.rightshift();
    obj.leftshift();
    obj.oRopreater();
    obj.andopreter();
    return 0;
}