#include <unistd.h>

void    ft_putchar(char x)
{
    write(1, &x, 1);
}
void    put_str(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
void    put_nbr(int n)
{
    long i = (long)n;
    
    if (i < 0)
    {
        ft_putchar('-');
        i = -i;
    }
    if (i >= 10)
        put_nbr(i / 10);
    ft_putchar(i % 10 + '0');
}
int main(void)
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 4 == 0 && i % 7 == 0)
            put_str("buzzfizz");
        else if (i % 4 == 0)
            put_str("buzz");
        else if (i % 7 == 0)
            put_str("fizz");
        else
            put_nbr(i);
        ft_putchar('\n');
        i++;
    }
    return 0;
}