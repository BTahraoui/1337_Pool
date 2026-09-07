#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int main(int argc, char *argv[])
{
	int i = 0;
	int pos = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}

	while (argv[1][i])
	{
		if (argv[1][i] == ' ')
		{
			ft_putchar(' ');
			pos = 0;
		}
		else 
		{
			if ((pos % 2 == 0) && (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
				ft_putchar(argv[1][i] - 32);
			else if ((pos % 2 != 0) && (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
				ft_putchar(argv[1][i] + 32);
			else
				ft_putchar(argv[1][i]);
			pos++;
		}
		i++;
	}
	ft_putchar('\n');
	return 0;
}
