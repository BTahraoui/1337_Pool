#include <unistd.h>

void    ft_putchar(char x)
{
    write(1, &x, 1);
}
int main(void)
{
    int x;

    x = 0;
    while (x <= 9)
    {
        if (x % 2 == 1)
            ft_putchar(x + '0');
        x++;
    }
}