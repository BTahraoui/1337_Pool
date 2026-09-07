#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		cypher;
	char	c1;
	char	k1;
	int		k_shift;

	if (argc != 3 || !argv[1][0] || !argv[2][0])
	{
		ft_putchar('\n');
		return (0);
	}

	i = 0;
	j = 0;
	while (argv[1][i])
	{
		c1 = argv[1][i];
		k1 = argv[2][j];

		if (k1 >= 'a' && k1 <= 'z')
			k_shift = k1 - 'a';
		else if (k1 >= 'A' && k1 <= 'Z')
			k_shift = k1 - 'A';
		else
			k_shift = 0;

		if (c1 >= 'a' && c1 <= 'z')
		{
			cypher = (c1 - 'a' + k_shift) % 26 + 'a';
			write(1, &cypher, 1);
			j++;
		}
		else if (c1 >= 'A' && c1 <= 'Z')
		{
			cypher = (c1 - 'A' + k_shift) % 26 + 'A';
			write(1, &cypher, 1);
			j++;
		}
		else
			write(1, &argv[1][i], 1);

		if (!argv[2][j])
			j = 0;

		i++;
	}

	ft_putchar('\n');
	return (0);
}