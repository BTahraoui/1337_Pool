#include <unistd.h>
void 	ft_putchar(char x)
{
	write(1, &x, 1);
}

int main(int argc, char *argv[])
{
	int i = 0;
	int pos = 0;
	int count;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	char s = argv[1][i];
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			count = 0;
			pos = argv[1][i] - 'a' + 1;
			while (count < pos)
			{
				ft_putchar(argv[1][i]);
				count++;
			}
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			pos = argv[1][i] - 'A' + 1;
			count = 0;
			while (count < pos)
			{
				ft_putchar(argv[1][i]);
				count++;
			}
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
