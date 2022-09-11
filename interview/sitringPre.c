#include<stdio.h>
#include<math.h>
#include<string.h>


int main() {
    // char ch[]="sourav kumar saini";
    // char ch[20];
    // printf("enter string");
    // scanf("%s",&ch);
    char ch[20]={'s','o','u','r','a','v'};
    
    for(int i=0;i<=20;i++){
        if(ch[i]!=NULL){
        printf("%c ",ch[i]);
        }
        else{
            break;
        }
    }
    char name[5];
    printf("enter full name \t");
    //scanf("%s",name);//gets(name); , fgets(name);
    scanf("%[^\n]s",name);
    puts(name);
    printf("hloo");
    return 0;
}