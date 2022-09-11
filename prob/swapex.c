#include <stdio.h>
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    return;
}
int main()
{
    /* code */
    int a, b;
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("enter the value of b \n");
    scanf("%d",&b);
    swap(&a, &b);
    printf("a = %d \n b = %d", a, b);
    return 0;
}
