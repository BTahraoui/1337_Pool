#include <unistd.h>
void ft_putchar(char x)
{
    write(1, &x, 1);
}
int main()
{
    int x;
    x = 0;

    while(x <= 10)
    {
        if (x % 2 == 0)
        {
            if (x == 10)
            {
                ft_putchar('1');
                ft_putchar('0');
            }
            else
            ft_putchar(x + '0');
        }
        x++;
    }
    return (0);
}