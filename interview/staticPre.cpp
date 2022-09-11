#include<iostream>

using namespace std;

class st{
    public:
    int e;
    static int a;
    static int b;
    // ******* get a static data by the help of static function ******** 
    void set(){
        e=14;
        get();
    }
    static void get(){
        cout<<" a = "<<a<<endl;
        cout<<" b = "<<b<<endl;
        a++;
        b++;
    }
};

// ******** set a and b vlue ********
 int st::a=12;
 int st::b=12;


int main(){
    st o;
    o.get();

    st::get();

    st o1;
    o1.set();

    return 0;
}