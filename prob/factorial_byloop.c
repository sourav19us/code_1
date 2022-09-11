// Replace ___ with your code
#include <stdio.h>

int main() {
  
    int n;

    // get input value for number
    printf("Enter the NO:-\n");
    scanf("%d",&n);

    int f = 1;
    
    // run a for loop from i = 1 to i <= number
    // inside loop multiply factorial with i
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }

    // print factorial
    printf("factorial of %d is :-%d",n,f); 

    return 0;
}