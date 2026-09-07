#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	return (c == ' ');
}

int	main(int argc, char **argv)
{
	int	i;
	int	flag;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	
	i = 0;
	flag = 0;
	while (argv[1][i] && argv[1][i] == ' ')
		i++;
	while (argv[1][i])
	{
		if (is_space(argv[1][i]))
			flag = 1;
		else
		{
			if (flag)
				ft_putchar(' ');
			ft_putchar(argv[1][i]);
			flag = 0;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}