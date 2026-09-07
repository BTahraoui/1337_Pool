#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_numbers(void)
{
	int x;
	
	x = 0;
	while (x <= 9)
	{
		ft_putchar(x + '0');
		x++;
	}
}
