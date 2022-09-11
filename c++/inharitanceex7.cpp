#include<iostream>

using namespace std;

class student
{
    protected:
    int roll_no;
    public:
    void set_roll_no()
    {
        cout<<"enter the roll no "<<endl;
        cin>>roll_no;
    }

};
 
class test : virtual public student
{
    protected:
    float mathes , hindi; 
    public:
    void set_marks()
    {
        cout<<"enter the mathes markes "<<endl;
        cin>>mathes;
        cout<<"enter the hindi markes "<<endl;
        cin>>hindi;
    }

}; 

class sport : virtual public student
{
    protected:
    float ludo;
    public:
    void set_sport_marks()
    {
        cout<<"enter the sport  ludo marks "<<endl;
        cin>>ludo;
    }
};

class total : public test , public sport
{
    private:
      float total_no;
    public:
    void set_total_nu()
    {
        total_no = (mathes + hindi + ludo );
    } 

    void display()
    {
        cout<<" your mathes markes is "<<mathes<<endl;
        cout<<" your hindi markes is "<<hindi<<endl;
        cout<<" your ludo markes is "<<ludo<<endl;
        cout<<" your total markes is "<<total_no<<endl;
        cout<<">>>>>>>>>> exam end <<<<<<<<<<"<<endl;
    } 

};

int main()
{
    /* code */
    total c1;
    c1.set_roll_no();
    c1.set_marks();
    c1.set_sport_marks();
    c1.set_total_nu();
    c1.display();
    return 0;
}
