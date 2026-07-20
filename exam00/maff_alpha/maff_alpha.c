#include <unistd.h>

void ft_putchar(char x)
{
	write(1, &x, 1);
}
int main()
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		if (x % 2 == 0)
			ft_putchar(x - 32);
		else	
			ft_putchar(x);
		x++;
	}
	ft_putchar('\n');
	return (0);
}
