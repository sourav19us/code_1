#include <iostream>
using namespace std;
int main()
{
    /* code */
    int a;
    for (int i = 1; i > 0; i++)
    {
        cout << "enter the your  age " << endl;
        cin >> a;
        /* code */
        if ((a > 18) && (a < 30))
        {
            cout << "your age is between 18 to 30 so you go in ROOM NO:- 1" << endl;
        }
        else if ((a >= 30) && (a < 60))
        {
            /* code */
            cout << "your age is between 30 to 60 so you go in ROOM NO:- 2 " << endl;
        }
        else if ((a >= 60) && (a < 90))
        {
            /* code */
            cout << "your age is between 60 to 90 so you go in ROOM NO:- 3 " << endl;
        }
        else if ((a >= 90))
        {
            cout << "your age is 90 or over 90 so you go in ROOM NO:- 4  " << endl;
        }
        else if ((a <= 18) && (a > 5))
        {
            /* code */
            cout << "your age is between 18 to 5 so you go in ROOM NO:- 5  " << endl;
        }
        else if ((a <= 5) && (a > 0))
        {
            cout << "your age is less than  5 so you go with your GAR:- 5  " << endl;
        }
        else if (a == 0)
        {
            break;
        }
    }

    return 0;
}
