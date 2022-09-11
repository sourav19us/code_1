#include <stdio.h>
#include <string.h>
struct emp
{
    /* data */
    char name[50];
    int age[];
};

int main()
{
    /* code */
    struct emp d1, d2;
    printf("enter name of emp 1 \n");
    scanf("%s", &d1.name);
    printf("enter age of emp 1 \n");
    scanf("%d", &d1.age);
    printf("enter name of emp 2 \n");
    scanf("%s", &d2.name);
    printf("enter age of emp 2 \n");
    scanf("%d", &d2.age);
    printf("emp 1 name is %s \n emp 1 age is %d\n",d1.name,d1.age);
    printf("emp 2 name is %s \n emp 2 age is %d\n",d2.name,d2.age);
    return 0;
}
