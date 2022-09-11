#include<iostream>
#include<list>

using namespace std;

//>>>>>>>>>>>>>>>>>> >  list <<<<<<<<<<<<<<<<<<<<

void display(list<int> &lst2)//<<<<<<<<<<<<<<<<
{
    list<int> :: iterator iter;
    for (iter=lst2.begin(); iter!=lst2.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main()
{
    /* code */
    list<int> list1;//<<<<<<<<<<<<<<<<<<<<<<<<<< syntex >>>>>>>
    list<int> list2(5);//<<<<<<<<<<<<<<<<<
    list<int> list3(5,6);//<<<<<<<<<<<<<<<<
    int size;
    int ele;
    cout<<"enter the size of list "<<endl;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"enter the element of list "<<i+1<<endl;
        cin>>ele;
        list1.push_back(ele);
    }
    list1.pop_back();//<<<<<<<<<<<<<<<<<<
    list3.pop_front();//<<<<<<<<<<<<<<<<<<
    list1.push_back(445);//<<<<<<<<<<<<<<<<<<
    display(list1);
    display(list3);

    list<int> :: iterator itr=list2.begin();
    list2.insert(itr,45);//<<<<<<<<<<<<<<<<<<<
    list2.insert(itr,5,455);//<<<<<<<<<<<<<<<
    display(list2);    
    list2.remove(45);//<<<<<<<<<<<<<< remove all elememt that have 45 value <<<<<<<
    display(list2);    

    list1.merge(list2);
    display(list1);
    list1.reverse();//<<<<<<<<<<<<<<<
    return 0;
}
