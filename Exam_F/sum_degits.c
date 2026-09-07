int    sum_degits(int nb)
{
    int sum;

    if (nb < 0)
        nb = -nb;

    while (nb >= 10)
    {
        sum = 0;
        while (nb > 0)
        {
            sum += nb % 10;
            nb /= 10;
        }
        nb = sum;
    }
    return (sum);
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;

    printf("%d\n", sum_degits(1337));
    return 0;
}
