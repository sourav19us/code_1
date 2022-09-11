#include<stdio.h>

// int fcat(int a){
//     if(a==1){
//         return 1;
//     }
//     else{
//         return a*fcat(a-1);
//     }

// }

int main()
{
    // factorial with recursion function 
    int a;
    printf("enter the num to factorial \n ");
    printf("a = ");
    scanf("%d",&a);
    printf(" %d! = %d \n",a,fcat(a));

    // factorial without recursion function
    int b=1;
    for(int i=1;i<=a;i++)
    {
        b=b*i;
    }
    printf("%d! = %d \n",a,b);
    printf("%d",sizeof(int));
    return 0;
}
 