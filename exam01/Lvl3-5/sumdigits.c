#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int	main(int argc, char **argv)
{
	int	arg;
	int	i;
	int	sum;

	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	sum = 0;
	arg = 1;
	while (arg < argc)
	{
		i = 0;
		if (argv[arg][i] == '+' || argv[arg][i] == '-')
			i++;
		while (argv[arg][i] >= '0' && argv[arg][i] <= '9')
		{
			sum += argv[arg][i] - '0';
			i++;
		}
		arg++;
	}
	int r = 0;
	while (sum > 0)
	{
		r = r + sum % 10;
		sum /= 10;
	}
	
	ft_putnbr(r);
	ft_putchar('\n');
	return (0);
}