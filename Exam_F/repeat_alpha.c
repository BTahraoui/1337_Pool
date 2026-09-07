#include <unistd.h>

void    ft_putchar(char x)
{
    write(1, &x, 1);
}

int main(int argc, char *argv[])
{
    int i = 0;
    int repeat = 0;
    int count;
    char c;
    if (argc != 2)
    {
        ft_putchar('\n');
        return (0);
    }

    while (argv[1][i])
    {
        c = argv[1][i];
        if (c >= 'a' && c <= 'z')
        {
            repeat = c - 'a' + 1;
            count = 0;
            while (count < repeat)
            {
                ft_putchar(c);
                count ++;
            }
        }
        else
            ft_putchar(c);
        i++;
    }   
    ft_putchar('\n');
    return 0;
}
