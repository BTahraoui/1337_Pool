#include <unistd.h>
void ft_putchar(char x)
{
    write(1, &x, 1);
}
void ft_putnbr(int nb)
{
    long n = nb;
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}
int main(int argc, char  *argv[])
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    int i = 0;
    int count;
    while (argv[1][i])
    {
        count = 1;
        while (argv[1][i] == argv[1][i + count])
            count++;
        ft_putchar(argv[1][i]);
        if (count > 1);
            ft_putnbr(count);
        i += count;
    }
    
    return 0;
}
