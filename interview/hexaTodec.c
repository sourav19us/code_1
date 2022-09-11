#include<stdio.h>

int main()
{
    long a=15269;
    int b=0;
    int ch[20];
    
    for (int i = 0; i < 20; i++)
    {
        /* code */
        // printf("%c \n",ch[i]);
        b=a%16;        
        a=(a/16);
        ch[i]=b;
    }
    int *c=ch;
    for (int i = 19; i >=0 ; i--)
    {
        /* code */
        if(*(c+i)!=NULL)
        {
          if (*(c+i)==10){
            printf("A");
            continue;
          }
          if (*(c+i)==11){
            printf("B");
            continue;
          }
          if (*(c+i)==12){
            printf("C");
            continue;
          }
          if (*(c+i)==13){
            printf("D");
            continue;
          }
          if (*(c+i)==14){
            printf("E");
            continue;
          }
          if (*(c+i)==15){
            printf("F");
            continue;
          }
          else{
          printf("%d",*(c+i));
          }  
        }
    }

    return 0;
}