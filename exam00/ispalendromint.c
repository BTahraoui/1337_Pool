#include <stdbool.h>
#include <stdio.h>

bool ispal(int x)
{
    int degit;
    int rev;
    int num;

    if (x < 0)
        return (false);
    num = x;
    while (num > 0)
    {
        degit = num % 10;
        rev = rev * 10 + degit;
        num = num / 10;
    }
    if (x == rev)
        return (true);
    return (false);
}
int main()
{
    int x = 121;
    bool y = ispal(x);
    printf("%d", y);
}