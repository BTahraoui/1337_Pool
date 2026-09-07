#include <stdlib.h>

char	*ft_itoa(int nb)
{
	int		i;
	int		is_nega;
	long	num_copy;
	long	num_original;
	int		size;
	char	*str;

	i = 0;
	is_nega = 0;
	num_copy = nb;
	num_original = nb;
	size = 0;

	if (num_copy == 0)
		size = 1;
	if (num_copy < 0)
	{
		is_nega = 1;
		num_copy = -num_copy;
		size++;
	}
	while (num_copy > 0)
	{
		num_copy /= 10;
		size++;
	}
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (num_original < 0)
		num_original = -num_original;
	i = size - 1;
	while (num_original > 0)
	{
		str[i] = (num_original % 10) + '0';
		num_original /= 10;
		i--;
	}
	if (is_nega)
		str[0] = '-';
	if (nb == 0)
		str[0] = '0';
	return (str);
}