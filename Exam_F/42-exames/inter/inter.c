#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int main(int argc, char *argv[])
{
	int i = 0;
	int seen;

	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i])
	{
		int j = 0;
		seen = 0;
		while (argv[2][j])
		{	
			if (argv[1][i] == argv[2][j])
				seen = 1;
			j++;
		}
		j = 0;
		while (j < i)
		{
			if (argv[1][i] == argv[1][j])
				seen = 0;
			j++;
		}
		if (seen)
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

