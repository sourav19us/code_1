#include<stdio.h>
int main()
{
    /*enter the code for find out the enter letter is a vowel or not */
    char letter;
    printf("enter the letter ");
    scanf("%c",&letter);
    switch (letter)
    {
    case 'a':
        printf("enter letter a is vowel");
        break;
    case 'e':
        printf("enter letter e is vowel");
        break;
    case 'i':
        printf("enter letter i is vowel");
        break;
    case 'o':
        printf("enter letter o is vowel");
        break; 
    case 'u':
        printf("enter letter u is vowel");
        break;       
    default:
        printf("enter letter  is not vowel");
        break;
    }
    return 0;
}
