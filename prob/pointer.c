#include <stdio.h>
int main()
{
    /* code of pointer , syntex of pointer in
    (eg
         int a;
         datatype *pointer_name=&a;
                    OR
         datatype *pointer_name;
         *pointer_name=&a;
             ) */
    printf("pointer\n");
    int a;
    a = 23;
    int *point = &a;
    int *ptr=NULL;
    printf("value of a is %d by the help of pointer ", *point);
    printf("\n adder of pointer is %d ", &point);
    printf("\n adder of pointer is %p ", &point);
    printf("\n value of a is %p by the pointer help ", *point);
    printf("\n adder of a is %d ",&a);
    printf("\n null pointer value is %p",ptr);
    return 0;
}
