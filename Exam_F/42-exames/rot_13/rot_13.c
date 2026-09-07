#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int main(int ac, char *av[])
{
	int i = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	char c;
	while (av[1][i])
	{
		c = av[1][i];
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
	return (0);
}
