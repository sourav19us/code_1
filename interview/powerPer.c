#include<stdio.h>

void power(int a,int b){

    int c=1;
    for(int i=1; i<=b; i++){
        c=c*a;        
    }
    printf(" %d^%d = %d ",a,b,c);
}

int main(){

    power(5,2);
    return 0;
}