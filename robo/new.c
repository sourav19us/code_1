#include<stdio.h>

int main(){
    // int a =1;
    // for(int b=1;b<=5;b++){
    //     a=b*b*b;
    //     printf("%d \n",a);
    // }
    // String= DHIMADNAIRAOSRD
    // char str[]="DHIMADNAIRAOSRD";
    
    // for(int c=0;c<=14;c++){
    //     int a=0;
    //     for(int b=0;b<=14;b++)
    //     {
    //         if(str[c]==str[b]){
    //             a=a+1;                
    //         }
    //     }
    //     printf("%c \t = ",str[c]);
    //     printf("%d \n",a);
    //     //   if(a==3){
    //     //     printf("%c \t = %d",str[c],a);
    //     //   }
    //  }
    // char alphabets[]="ABCDEFGHIJKLMNOPRSTUVWXYZ";
    // int b=0;
    // for(int a=0;a<=50;a++){
    //     if(alphabets[a]=='X'){
    //         printf("index value of x is  = %d \n",a);   

    //     }
    //     else if(a==4){
    //         printf("char at 4 is = %c \n",alphabets[4]);
    //     }
    //     else if(alphabets[a]==NULL){
    //         break;
    //     }
    //     else{
    //         b=b+1;
    //     }

    // }

    // printf("%d",b);

    float ary[5];
    printf("enter bill 1 value = ");
    scanf("%d",&ary[0]);
    printf("\n");
    printf("enter bill 2 value = ");
    scanf("%d",&ary[1]);
    printf("\n");
    printf("enter bill 3 value = ");
    scanf("%d",&ary[2]);
    printf("\n");
    printf("enter bill 4 value = ");
    scanf("%d",&ary[3]);
    printf("\n");
    printf("enter bill 5 value = ");
    scanf("%d",&ary[4]);
    printf("\n");
    printf("enter bill 6 value = ");
    scanf("%d",&ary[5]);
    printf("\n");

    // for(int a=0;a<=5;a++){
    //     printf("enter bill %d value = ",a+1);        
    //     scanf("%d",&ary[a]);
    //     printf("\n");
        
    // }
    
    float a=0;
    for(int b=0;b<=5;b++){
        a=a+ary[b];
    }
    printf("avg bill is = %d",(a/6));
    return 0;
    /*
    Bill  Values::  1100.00, 1120.50, 1400.75, 1050.70, 1300.50,  1260.40
Output required:::    Total Bill amount for six months = 
Average for six months =
Highest Bill Value =
Lowest Bill Value =
    */
}