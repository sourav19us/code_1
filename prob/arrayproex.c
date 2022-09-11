#include <stdio.h>
void rev(int ary[])
{
    printf("rev array is\n");
    for (int i = 0; i < 6; i++)
    {
        /* code */

        printf("array %d is %d \n", i, ary[5-i]);
    }
}
int main()
{
    /* code */
    int ary[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        /* code */
        printf("array %d is %d\n", i, ary[i]);
    }
    rev(ary);
    return 0;
}
