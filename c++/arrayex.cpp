#include <iostream>
using namespace std;
int main()
{
    /* code */
    int a;
    cout << "enter the size of Array " << endl;
    cin >> a;
    int num[a];
    for (int i = 0; i < a; i++)
    {
        /* code */
        cout << "enter array num [" << i << "]"
             << "value" << endl;
        cin >> num[i];
    }
    for (int j = 0; j < a; j++)
    {
        /* code */
        cout << "enter array num [" << j << "]" << num[j] << endl;
    }

    //*****************Array and pointer********************
    int* p=num;
    for (int k = 0; k < a; k++)
    {
        /* code */
        cout<<"*(p+"<<k<<") = "<<*(p+k)<<endl;
    }
    //****************** 
    cout<<"*(p) ="<<*(p)<<endl;
    cout<<"*(p+1) ="<<*(p+1)<<endl;
    cout<<"*(p+2) ="<<*(p+2)<<endl;
    

    return 0;
}
