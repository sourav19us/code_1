#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 
    //**************code for malloc*****************
    int *ptr;
    ptr = (int*)malloc(sizeof(int));
    for (int i = 0; i < 5; i++)
    {

        printf("enter the no %d\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int j = 0; j < 5; j++)
    {

        printf("enter no is  %d\n", ptr[j]);
    }
     */
     /*
     //*************code for calloc*****************
    int *ptr;
    ptr = (int*)calloc(1, sizeof(int));

    for (int i = 0; i < 5; i++)
    {

        printf("enter the no %d\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int j = 0; j < 5; j++)
    {

        printf("enter no is  %d\n", ptr[j]);
    }
    */
     /*  
     // ************code of realloc*************
    int n;
    printf("enter the new size %d\n");
    scanf("%d",&n);
    int *ptr;
    ptr = (int*)realloc(ptr,n*sizeof(int));

    for (int i = 0; i < n; i++)
    {

        printf("enter the no %d\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int j = 0; j < n; j++)
    {

        printf("enter no is  %d\n", ptr[j]);
    }
    */
   // ***********code for free**************
   int n;
    printf("enter the new size \n");
    scanf("%d",&n);
    int *ptr;
    ptr = (int*)realloc(ptr,n*sizeof(int));

    for (int i = 0; i < n; i++)
    {

        printf("enter the no %d\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int j = 0; j < n; j++)
    {

        printf("enter no is  %d\n", ptr[j]);
    }
    free(ptr); /**********free function is use for free memory form heap memory 
                          that is given by dynamic memory allocation ************/
                
    return 0;
}
