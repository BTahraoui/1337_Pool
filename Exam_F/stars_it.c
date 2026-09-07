#include <unistd.h>


void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}

	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == ' ')
			ft_putchar(' ');
		else if (i == 0 || argv[1][i + 1] == ' ' || argv[1][i - 1] == ' ' || argv[1][i + 1] == '\0')
			ft_putchar(argv[1][i]);
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
	return 0;
}
