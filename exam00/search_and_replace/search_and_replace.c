#include <unistd.h>
void 	ft_putchar(char x)
{
	write(1, &x, 1);
}

int main(int argc, char *argv[])
{
	if (argc != 4 || argv[2][1] != '\0' || argv[3][1] != '\0' )
	{
		write(1, "\n", 1);
		return (0);
	}
	int i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == argv[2][0])
		{	
			argv[1][i] = argv[3][0];
			ft_putchar(argv[1][i]);
		}
		else
			ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
