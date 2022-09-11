#include <stdio.h>
#include <time.h>
int main()
{
     
    char str[];
    int a;
    srand(time(NULL));
    a = rand()%3;
    printf("enter the word roke ,paper and scissors\n");
    printf("enter the word \n");
    scanf("%s", &str);
    
    
    // printf("randum no is %d",a);
    
    switch (a)
    {
    case 1:
        
        printf("enter the word is \n roke ");
        break;
    case 2:
        
        printf("enter the word is \n paper ");
        break;
    case 3:
        
        printf("enter the word is \n scissors\n");
        break;
    default:
        break;
    }
    
    return 0;
}
