#include <unistd.h>

void    ft_putchar(char x)
{
	write(1, &x, 1);
}

int main(int argc, char *argv[])
{
	int i;
	int j;
	char c;
	char k;
	char cipher;

	if (argc != 3 || argv[2][0] == '\0')
	{
		ft_putchar('\n');
		return (0);
	}
	
	i = 0;
	j = 0;
	while (argv[1][i])
	{
		c = argv[1][i];
		k = argv[2][j];
		
		if (k >= 'A' && k <= 'Z')
			k += 32;
		if (c >= 'a' && c <= 'z')
		{
			cipher = c - 'a';
			cipher = cipher + (k - 'a'); 
			cipher = cipher % 26;
			cipher = cipher + 'a';
			j++;
			if (argv[2][j] == '\0')
				j = 0;
			ft_putchar(cipher);
		}
		
		else if (c >= 'A' && c <= 'Z')
		{
			cipher = c - 'A';
			cipher = cipher + (k - 'a');
			cipher = cipher % 26;
			cipher = cipher + 'A';
			j++;
			if (argv[2][j] == '\0')
				j = 0;
			ft_putchar(cipher);
		}
		
		else
			ft_putchar(c);
		i++;
	}
	ft_putchar('\n');
	return 0;
}
