#include<iostream>
 
using namespace std;

/////////----------->>>>>>>>>> Multilevel Inheritance <<<<<<<<<-------------/////////////

class roll
{
    int rollno;
    public:
    void set_roll_no(int x)
    {
        rollno=x;
    }
    int get_roll_no()
    {
        return rollno;
    }
};

class marks : public roll
{
    float hindi;
    float english;
    public:
    void set_marks(float y,float z)
    {
        hindi=y;
        english=z;
    }
    int get_hindi_marks()
    { 
        return hindi;
    }
    int get_english_marks()
    {
         return english;
    }
};

class total : public marks
{
    int total_num;
    public:
    int get_total_num()
    {
        return (get_hindi_marks()+get_english_marks());
    }
    void display()
    {
        cout<<" Roll no = "<<get_roll_no()<<endl;
        cout<<" Marks in hindi = "<<get_hindi_marks()<<endl;
        cout<<" Marks in english = "<<get_english_marks()<<endl;
        cout<<" Total marks (hindi + english) = "<<get_total_num()<<endl;
    }
};

int main()
{
    /* code */
    total c1;
    c1.set_roll_no(5036);
    c1.set_marks(45.6,69.8);
    c1.display();
    return 0;
}
