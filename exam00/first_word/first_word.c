#include <unistd.h>

void 	ft_putchar(char x)
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
	
	while (argv[1][i] == ' ' || argv[1][i] == '\t')
		i++;
	while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	
	ft_putchar('\n');
	return (0);
}
