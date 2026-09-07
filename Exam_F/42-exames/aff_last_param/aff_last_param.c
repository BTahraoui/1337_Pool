#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	int end = argc - 1;
	while (argv[end][i])
	{
		write(1, &argv[end][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
		
