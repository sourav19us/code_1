#include<stdio.h>

#include<stdlib.h>

int main()
{
    int *ptr,n;
    printf("enter the size of arrry \n");
    scanf("%d",&n);

    // printf("size of in t after malloc() function %d \n",sizeof(int));

    ptr=(int*)malloc(n*sizeof(int));

    // printf("size of int after malloc() function %d \n",sizeof(a));
    // ptr=realloc(ptr,80);

    // printf("size after realloc() is %d \n",sizeof(ptr));

    for (int i = 0; i < n; i++)
    {
        /* code */
        printf(" %d enter the value ",i+1);
        scanf("%d",ptr[i]);
    }
   for (int i = 0; i < n; i++)
    {
        /* code */
        printf(" %d enter the value ",i+1,ptr[i]);
        
    }    
    
    free(ptr);
    return 0;
}