#include<stdio.h>
#include<string.h>
int main()
{
    /* code */
    char n1[20];
    char n2[20];
    printf("enter the name 1 \n");
    gets(n1);
    printf("enter the name 2 \n");
    gets(n2);
    printf("enter name 1 is %s \n enter name 2 is %s \n",n1,n2);
    printf("len of char 1 is %d \n len of char 2 is %d \n",strlen(n1),strlen(n2));
    printf("combine n1 and n2\n");
    puts(strcat(n1,n2));
    char n3[20]="harry";
    printf("copy n3 into n2 is \n");
    puts(strcpy(n2,n3));
    printf("print n1 and n2 together\n");
    puts(strcat(n1,n2));
    printf("\n");
    puts(n3);
    printf("rev name print \n");
    puts(strrev(n3));
    return 0;
}
