#include <stdio.h>

int     climbing_stairs(int n )
{
    int curr;
    int prev1;
    int prev2;
    int i;

    prev1 = 1;
    prev2 = 2;
    i = 3;
    if (n == 1)
        return (1);
    if (n == 2)
        return (2);
    while (i <= n)
    {
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
        i++;
    }
    return (curr);
}
