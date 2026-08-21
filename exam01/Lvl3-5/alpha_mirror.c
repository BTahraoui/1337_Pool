#include <unistd.h>

void    ft_putchar(char x)
{
    write(1, &x, 1);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return (0);
    }
    int i = 0;

    while (argv[1][i])
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            argv[1][i] = 'z' - (argv[1][i] - 'a');
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            argv[1][i] = 'Z' - (argv[1][i] - 'Z');
        ft_putchar(argv[1][i]);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}