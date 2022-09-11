#include<stdio.h>
#include<string.h>
struct studant // syntex is :- struct struct_name
{
    /* data */
    int id; 
    int markes;
    int class;
    char f;
    char name[20];
};

int main()
{
    /* code */
    struct studant sourav , harry , kuntal ; // syntex is :- struct struct_name veryabel1 , veryabel2, .... ;
    sourav.id=1; // sourav is varyabell syntex is :- varyabell_name.varyabell_of_struct=data;
    harry.id=2;
    kuntal.id=3;
    sourav.markes=15;
    harry.markes=22;
    kuntal.markes=38;
    sourav.class=5;
    harry.class=8;
    kuntal.class=11;
    sourav.f='a';
    harry.f='v';
    kuntal.f='s';
    sourav.name="sourav";
    harry.name="harry";
    kuntal.name="kuntal";
    printf(" sourav id is %d \n sourav markes is %d \n  sourav class is %d\n ",sourav.id,sourav.markes,sourav.class);
    printf(" harry id is %d \n harry markes is %d \n  harry class is %d\n ",harry.id,harry.markes,harry.class);
    printf(" kuntal id is %d \n kuntal markes is %d \n  kuntal class is %d\n ",kuntal.id,kuntal.markes,kuntal.class);
    strcpy(sourav.name,"hi sourav how are you");
    printf("%s",sourav.name);
    return 0;
}
