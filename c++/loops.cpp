#include <iostream>
using namespace std;
int main()
{
    /* code */
    int num;
    cin >> num;
    cout << "0 to \t" << num << " total primnum" << endl;
    for (int i = 0; i < num; i++)
    {
        /* code */
        if (i % 2 == 0)
        {
            cout << i << "\t";
        }
        else
        {
            continue;
        }
    }
    cout<<"\n";
    cout << "0 to \t" << num << " total not primnum" << endl;
    for (int i = 0; i < num; i++)
    {
        /* code */
        if (i % 2 != 0)
        {
            cout << i << "\t";
        }
        else
        {
            continue;
        }
    }

    return 0;
}
