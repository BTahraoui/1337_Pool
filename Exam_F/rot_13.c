#include <unistd.h>

void    ft_putchar(char x)
{
    write(1, &x, 1);
}

int main(int argc, char *argv[])
{
    int i;
    char c;

    if (argc != 2)
    {
        ft_putchar('\n');
        return (0);
    }
    
    i = 0;
    while (argv[1][i])
    {
        c = argv[1][i];
        if (c == 'z')
            ft_putchar('m');
        else if (c == 'Z')
            ft_putchar('M');
        else if (c >= 'a' && c <= 'm')
            ft_putchar(c + 13);
        else if (c >= 'n' && c <= 'z')
            ft_putchar(c - 13);
        else if (c >= 'A' && c <= 'M')
            ft_putchar(c + 13);
        else if (c >= 'N' && c <= 'Z')
            ft_putchar(c - 13);
        else 
            ft_putchar(c);
        i++;
    }
    ft_putchar('\n');
    return 0;
}
