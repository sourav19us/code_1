#include <stdio.h>
int main()
{
    /* code */
    int a[3][3] = {{52, 52, 52}, {52, 52, 52}, {52, 52, 52}};
    int b[3][3] = {{52, 52, 52}, {52, 52, 52}, {52, 52, 52}};
    int c[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int z = 0; z < 3; z++)
        {
            /* code */

            for (int q = 0; q < 3; q++)
            {
                 /* code */
                c[i][z] = c[i][z] + a[i][z] * b[q][z];
            }
        }
    }
    for (int k = 0; k < 3; k++)
    {
        /* code */
        for (int s = 0; s < 3; s++)
        {
            /* code */
            printf("%d\t", c[k][s]);
        }
        printf("\n");
    }

    return 0;
}

