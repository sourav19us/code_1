#include<iostream>

using namespace std;

int recur(int n){

    
    if(n==1){
        return 1;
    }
    // cout<<n<<"\n";
    return recur(n-1);
}

int main(){

    int a = 10;

    recur(10);

    return 0;
}