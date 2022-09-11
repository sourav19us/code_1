#include <stdio.h>
#include<string.h>
int main()
{
    /* code */
    int a;
    char str[50]="enter the string is";
    a=strlen(str);
    printf("strnig len is %d \n",a);
    for (int i = 0; i < a; i++)
    {
        /* code */
        printf("%c\n", str[i]);
    }

    return 0;
}
