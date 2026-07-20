#include <unistd.h>
int 	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
int main(int argc, char *argv[])
{
	int i;
	int end;

	if (argc != 2)
	{
		write(1, "\n", 1);	
		return (0);
	}
	i = 0;
	end = ft_strlen(argv[1]) - 1;
	while (end >= 0 && argv[1][i] != '\0')
	{
		write(1, &argv[1][end], 1);
		end--;
	}
	write (1, "\n", 1);
	return (0);
}
