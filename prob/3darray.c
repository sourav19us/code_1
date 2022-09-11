#include<stdio.h>
int main()
{
    /* code */
    int a[3][4][2]={{{2,3},{5,7},{9,3},{5,6}},{{21,31},{51,71},{91,31},{51,61}},{{22,32},{52,72},{92,32},{52,62}}};
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 4; j++)
        {
            /* code */
            for (int k = 0; k < 2; k++)
            {
                /* code */
                printf("%d\t",a[i][j][k]);
            }
           printf("\n"); 
        }
        printf("\n");
    }
    
    return 0;
}
