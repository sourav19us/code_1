#include <stdio.h>
int main()
{
    /* code */
    int num, a;
    printf("enter the no for one displye %d\n", num);
    scanf("%d", &num);

    for (int k = 0; k < 2; k++)
    {
        /* code */
        printf(" enter a no 1 for upto down \n enter a no 2 for  down upto\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            /* code */
            for (int i = 0; i <= num; i++)
            {
                /* code */
                for (int j = 0; j <= i; j++)
                {
                    /* code */
                    int st[j];
                    st[j] = 1;
                    printf("%d \t", st[j]);
                }
                printf("\n");
            }
            break;
        case 2:
            /* code */
            for (int i = num; i >= 0; i--)
            {
                /* code */
                for (int j = i; j >= 0; j--)
                {
                    /* code */
                    int st[j];
                    st[j] = 1;
                    printf("%d \t", st[j]);
                }
                printf("\n");
            }
            break;
        default:
            break;
        }
    }
    return 0;
}