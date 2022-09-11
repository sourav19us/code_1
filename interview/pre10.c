#include<stdio.h>

int sum(int c,int d){
    return (c+d);
}
int pro(int c,int d){
    return (c*d);
}
int main(){
    for(int i=1;i<=4;i++){
        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    int a,b;
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);
    printf("a+b = %d \n",sum(a,b));
    printf("a*b = %d \n",pro(a,b));    

    return 0;
}