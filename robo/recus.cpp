#include<iostream>

using namespace std;

int reus(int n){

    if(n==0){
        // cout<<"1";
        return 1;
    }
    cout<<n<<endl;
    return reus(n-1);
}

int main(){
    int a = 10;
    reus(10);
    return 0;
}