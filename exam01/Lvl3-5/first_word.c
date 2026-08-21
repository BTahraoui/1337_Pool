#include <unistd.h>

void    ft_putchar(char x)
{
    write(1, &x, 1);
}
int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    int i = 0;
    while (argv[1][i] == ' ' || argv[1][i] == '\t')
        i++;
    while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
    {
        ft_putchar(argv[1][i]);
        i++;
    }
    write (1, "\n", 1);
    return 0;
}
