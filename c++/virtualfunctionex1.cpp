#include<iostream>
#include<cstring>

using namespace std;

//>>>>>>>>>>>>>> Virtual Function <<<<<<<<<<<<<<<<<<<

class video
{
    protected:
    string tital;
    float rating;
    public:
    video(string x,float y)
    {
        tital =x;
        rating =y;
    }
    video()
    {

    }
    virtual void display()//<<<<<<<<<<<<<<<<<<<<<<<
    {
        cout<<" video display "<<endl;
    }
};   

class videowords : public video
{
    int words;
    public:

    videowords(string t,float q,int w):video(t,q)
    {
        words=w;
    }

    videowords()
    {

    }

    void display()
    {
        cout<<" video tital is "<<tital<<endl;
        cout<<" video rating is "<<rating<<endl;
        cout<<" video have total no of wordes is "<<words<<endl;
    }
};

class videotext : public video
{
    string text;
    public:
    videotext(string o,float u,string i):video(o,u)
    {
        text=i;
    }

    videotext()
    {

    }

    void display()
    {
      cout<<" video tital is "<<tital<<endl;
      cout<<" video rating is "<<rating<<endl;  
      cout<<" video text = "<<text<<endl;
    }
};

int main()
{
    /* code */
    string t;
    float r;
    int w1;
    string t1;
    t="songs";
    r=5.6;
    w1=88;
    t1="good song";
    //ptr=new video[2];
    videowords v2(t,r,w1);
    videotext v1(t,r,t1);
    video *ptr[2];
    ptr[0]=&v2;
    ptr[1]=&v1;
    ptr[0]->display();
    ptr[1]->display();
    // v1.display();// its also work
    // v2.display();

    return 0;
}

/*
    Rules for virtual functions
       > They cannot be static
       > They are accessed by object pointers
       > Virtual functions can be a friend of another class
       > A virtual function in the base class might not be used.
       > If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/