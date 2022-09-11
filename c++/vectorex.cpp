#include<iostream>
#include<vector>

using namespace std;

// >>>>>>>>>>>>>>>>>>> vectore <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

void display(vector<int> &v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        /* code */
    }
    cout<<endl;
}

int main()
{
    vector<int> vac1;//<<<<<<<<<<<<<<<<<<<<<<< syntex >>>>>>>>>>>>>>>
    vector<int> vac2(6,3);//<<<<<<<<<<"vac2(6,3)" = vac2(6) size of 6 but vac2(6,3) o/p = 6 times 3 >>>>>>>>>>>>>>>
    vector<int> vac3(vac2); // <<<<<<<<<<<<< 
    int size;
    cout<<"enter the size of vec1"<<endl;
    cin>>size;
    int element;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<"enter the element  "<<(i+1)<<endl;
        cin>>element;
        vac1.push_back(element);
    }
   
    vac1.pop_back();//>>>>>>>>>>>>> delete last element >>>>>>>>>>>>>>>>>>>>>>

    vector<int> :: iterator iter=vac1.begin();//<<<<<<<<<<<<< diff first to inster element >>>>>>>>>>>>>>
    vac1.insert(iter,5263);//<<<<<<<<<< "vac1.insert(iter,5263)" ,"iter" point first element
    vac1.insert(iter+1,5,511);/*>>>>>>>>>>>> "vac1.insert(iter+1,5,511)" , "+1" point to "2" element 
                                                and "5" = copy of element///  */
    display(vac1);
    display(vac2);
    display(vac3);
    
    return 0;
}
