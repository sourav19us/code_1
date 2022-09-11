#include <stdio.h>
int main()
{
    /* code */
    char row[10][10];
    for (int i = 0; i < 10; i++)
    {
        /* code */
        for (int j = 0; j < 10; j++)
        {
            /* code */
            row[i][j] = '@';
            printf("%c\t", row[i][j]);
        }
        printf("\n");
    }
    /* code */
    printf("\n");
    int row1[10][10];
    for (int k = 0; k < 10; k++)
    {
        /* code */
        for (int s = 0; s < 10; s++)
        {
            /* code */
            row1[k][s] = (k+s);
            printf("%d\t", row1[k][s]);
        }
        printf("\n");
    }
    
    return 0;
}
