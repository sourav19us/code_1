#include <iostream>
using namespace std;

int main()
{
    /* code */
    int a, b, c;
    cout << "enter a value \n a =";
    cin >> a;
    cout << "enter b value \n b =";
    cin >> b;
    for (int i = 0; i < 4; i++)
    {
        cout << "enter 1 for a+b \n enter 2 for a-b" << endl;
        cout << "enter 3 for a/b \n enter 4 for a%b" << endl;
        cout << "enter 0 for exit" << endl;
        cin >> c;
        if ((c >= 0) || (c <= 3))
        {
            /* code */
            switch (c)
            {
            case 1:
                /* code */
                cout << "a+b =" << (a + b) << endl;
                break;
            case 2:
                /* code */
                cout << "a-b =" << (a - b) << endl;
                break;
            case 3:
                /* code */
                cout << "a/b =" << (a / b) << endl;
                break;
            case 4:
                /* code */
                cout << "a%b =" << (a % b) << endl;
                break;

            default:
                break;
            }
        }
        else if (c == 0)
        {
            break;
        }
        else if ((c<0)||(c>3))
        {
            /* code */
            cout<<"pless enter no between 1 to 4"<<endl;
        }
        
    }
    return 0;
}
