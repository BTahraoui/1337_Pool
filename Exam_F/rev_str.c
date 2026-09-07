#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;
	char	tmp;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			/* Skip spaces/tabs */
			while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i++;
			
			start = i;
			/* Find the end of the current word */
			while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				i++;
			end = i - 1;

			/* Reverse current word in-place */
			while (start < end)
			{
				tmp = argv[1][start];
				argv[1][start] = argv[1][end];
				argv[1][end] = tmp;
				start++;
				end--;
			}
		}

		/* Print the modified string */
		i = 0;
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}