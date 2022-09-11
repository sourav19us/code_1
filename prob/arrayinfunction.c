#include<stdio.h>
int fu(int ay[])
{   
    ay[1]=4;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        printf("value of element %d is %d\n",i,ay[i]);
    }
    
}

int fu1(int *pt)
{
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        /* code */
         printf("value of element %d is %d\n",i,*(pt+i));
         
    }
    printf("\n");
    *(pt+1)=5555;
}
int main()
{
    /* code */
    int ary[]={11,2,3};
    fu(ary);
    fu1(ary);
    return 0;
}
