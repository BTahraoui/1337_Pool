#include <unistd.h>

void    ft_putchar(char x)
{
    write(1, &x, 1);
}
int main(int argc, char const *argv[])
{
    int i;

    i = 0;
    while (argv[1][i])
    {
        if (i % 2 == 0)
            write(1, &argv[1][i], 1);
        i++;
    }
    return 0;
}
