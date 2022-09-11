#include<stdio.h>
int main()
{
    /* code */
    char name[30];
    char itme[30];
    char cmp[30];
    printf("Enter the name\n");
    scanf("%s",&name);
    printf("Enter the itme name\n");
    scanf("%s",&itme);
    printf("Enter the compane name\n");
    scanf("%s",&cmp);
    FILE *ptr=NULL;
    ptr=fopen("fileex.txt","w");
    //fprintf(ptr,"%s",name);
    fprintf(ptr,"thank you %s for buy itme %s form compane %s for more didale call 45555",name,itme,cmp);

    return 0;
}

