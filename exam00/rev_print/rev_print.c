#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int size;
	int i;
	int end;

	i = 0;
	while (argv[1][i] != '\0')
		i++;
	size = i;
    end = size - 1;
	while (end >= 0)
	{
		write(1, &argv[1][end], 1);
		end--;
	}
	write (1, "\n", 1);
	return (0);
}	
