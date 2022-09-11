#include <stdio.h>
// Add Numbers Until User Enters 0
int main()
{

    int sum = 0;
    int n;
    int i = 1;
    // run a while loop that breaks only if input value is 0
    // if input value is other than 0, add it to sum
    while (i > 0)
    {
        if (n != 0)
        {
            if (i > 0 || i < 0)
            {
                scanf("%d", &n);
                sum = sum + n;
                i++;
            }
        }
        // print the sum
        else
        {
            break;
        }
    }
    printf("%d", sum);
    return 0;
}