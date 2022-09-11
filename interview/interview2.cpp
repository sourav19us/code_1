#include<iostream>

using namespace std;

int f;



struct interview2
{
    /* data */
    int a;
    float c;
    char d;
}o1;

union interview2
{
    /* data */
    int a;
    float b;
    int c;
}o2;


int main()
{
    /* code */
    o1.a=5;
    f=34;
    return 0;
}
