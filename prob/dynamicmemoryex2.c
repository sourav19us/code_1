#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* code */
    char *id1;
    char *id2;
    int a, b;
    printf("enter the SIZE of id1\n");
    scanf("%d", &a);
    printf("enter the SIZE of id2\n");
    scanf("%d", &b);
    id1 = (char *)malloc(a * SIZE of(char));
    id2 = (char *)malloc(b * SIZE of(char));
    for (int i = 0; i < 2; i++)
    {
        /* code */
        printf("enter the %d id1\n", i);
        scanf("%s", &id1[i]);
        printf("enter the %d id2\n", i);
        scanf("%s", &id2[i]);
    }
    for (int j = 0; j < 2; j++)
    {
        /* code */
        printf("enter the is %d id1 %s\n", j, id1[j]);
        printf("enter the is %d id2 %s\n", j, id2[j]);
    }

    // free(id1);
    // free(id2);

    return 0;
}
