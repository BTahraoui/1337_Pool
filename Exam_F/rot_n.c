#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char x)
{
    write(1, &x, 1);
}

int main(int argc, char *argv[])
{
    int k = atoi(argv[2]);
    char c;
    int i;

    if (argc != 3)
    {
        ft_putchar('\n');
        return (0);
    }

    i = 0;
    while (argv[1][i])
    {
        c = argv[1][i];
        if (c >= 'a' && c <= 'z')
        {
            c = (c - 'a' + k % 26 + 26) % 26 + 'a';
            ft_putchar(c);
        }
        else
            ft_putchar(c);
        i++;
    }
    ft_putchar('\n');
    return 0;
}
