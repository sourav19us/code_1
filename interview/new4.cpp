#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    // vector <int> vec1(4,150);
    vector <int> vec1{1,2,54,5,8,52,6,8,5,8,2,6};
    vector <int> :: iterator itr=vec1.begin();
    vec1.insert(itr+5,48596);
    vec1.erase(itr);
    vec1.assign(5,123);
    for (size_t i = 0; i < vec1.size(); i++)
    {
        /* code */
        cout<<vec1[i]<<endl;
    }
    
    return 0;
}