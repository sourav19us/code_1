#include<stdio.h>
int main()
{
    /* code */
    printf("date is :- %s\n",__DATE__);
    printf("time is :- %s\n",__TIME__);
    printf("file name is :- %s\n",__FILE__);
    printf("Line no is :- %d\n",__LINE__);
    printf("(1 for yes an 0(ZERO) for NO ) ANSI is :- %d\n",__STDC__);
    return 0;
}
