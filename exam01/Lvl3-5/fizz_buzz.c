#include <unistd.h>
void    ft_putchar(char x)
{
    write(1, &x, 1);
}
void    putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
void    putnbr(int nb)
{
    long n = (long)nb;

    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
        putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}
int main(void)
{
    int x;
    x = 1;
    while (x <= 100)
    {
        if (x % 3 == 0 && x % 5 == 0)
            putstr("fizzbuzz");
        else if (x % 3 == 0)
            putstr("fizz");
        else if (x % 5 == 0)
            putstr("buzz");
        else
            putnbr(x);
        write(1, "\n", 1);
        x++;
    }
}