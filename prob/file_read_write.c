#include<stdio.h>
int main()
{
    /* code */
    /* *********read mode
    char str[50];
    FILE *ptr=NULL;
    ptr=fopen("file.txt","r");
    fscanf(ptr,"%s",str);
    printf("file taxe is %s",str);
    */
    /* *********write mode
    FILE *ptr=NULL;
    char str[50]="hi hi hih hihihi";
    ptr=fopen("file.txt","w");
    fprintf(ptr,"%s",str);
    printf("%s",str);
    */
   // *********
    FILE *ptr=NULL;
    char str[50]="sourav sourav sourav ceiecwci";
    ptr=fopen("file.txt","a");
    fprintf(ptr,"%s",str);

    
        return 0;
}
