#include<stdio.h>
 /* code 
 online compiler link https://www.onlinegdb.com/online_c_compiler */
void fun(char p[])
{
    int i=0;
    while (p[i]!='\0')
    {
        /* code */
        printf("%c",p[i]);
        i++;
    }
       
}
int main()
{
    /* code */
    char n[]="sourav";
    fun(n);
    char name[50];
    gets(name);
    puts(name);
    printf("%s\n",name);
    return 0;
}
