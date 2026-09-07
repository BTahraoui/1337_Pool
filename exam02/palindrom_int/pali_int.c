/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pali_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-08-28 11:02:50 by btahraoui         #+#    #+#             */
/*   Updated: 2026-08-28 11:02:50 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

void 	ft_putchar(char x)
{
	write(1, &x, 1);
}
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		else if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        return 0;

    int degit;
    int rev;
    int original;
    int copy;

    copy = ft_atoi(argv[1]);
    original = ft_atoi(argv[1]);
    
    if (copy < 0)
        return (0);

    rev = 0;
    degit = 0;
    while (copy > 0)
    {
        degit = copy % 10;
        rev = rev * 10 + degit;
        copy /= 10;
    }
    if (original == rev)
        ft_putnbr(1);
    else
        ft_putnbr(99);
    return 0;
}

