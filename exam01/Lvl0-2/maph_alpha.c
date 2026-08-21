#include <unistd.h>

void    ft_putchar(char x)
{
	write(1, &x, 1);
}

int main(void)
{
	char x;
	char temp;

	x = 'a';
	while (x <= 'z')
	{
		if (x % 2 == 0)
		{
			temp = x - 32;
			ft_putchar(temp);
			ft_putchar(temp);
		}
		else
		{
			ft_putchar(x);
			ft_putchar(x);
		}
		x++;
	}
	ft_putchar('\n');
	return 0;
}