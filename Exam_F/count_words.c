#include <unistd.h>

void    ft_putchar(char x)
{
    write(1, &x, 1);
}

void    ft_putnbr(int nb)
{
    long n = nb;
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + 48);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return (0);
    }
    int i = 0;
    int count = 0;
    int count_w = 0;
    while (argv[1][i])
    {
        if (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\n')
            count_w = 0;
        else if (count_w == 0)
        {
            count_w = 1;
            count++;
        }
        i++;
    }
    ft_putnbr(count);
    return 0;
}
