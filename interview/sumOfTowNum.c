#include<stdio.h>

int main(){

    char str[40];

    int a,b;
    printf("enter your string \n");

    scanf("%[^\n]s",str);

    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);

    printf("a + b = %d \n",a+b);
    printf("enter string is %s",str);    
    
    return 0;
}