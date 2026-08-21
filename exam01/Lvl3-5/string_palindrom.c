#include <unistd.h>

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	start;
	int	end;

	if (argc != 2)
	{
		put_str("Witwit\n");
		return (0);
	}
	
	start = 0;
	end = 0;
	while (argv[1][end])
		end++;
	end--; 
	while (start < end)
	{
		if (argv[1][start] != argv[1][end])
		{
			put_str("not pali\n");
			return (0);
		}
		start++;
		end--;
	}

	put_str("pali\n");
	return (0);
}