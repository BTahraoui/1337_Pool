/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digital_root.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-08-28 12:30:00 by btahraoui          #+#    #+#             */
/*   Updated: 2026-08-28 12:30:00 by btahraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
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
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

void	sum_digits_recursive(int nb)
{
	int	sum;

	if (nb < 0)
		nb = -nb;
	while (nb >= 10)
	{
		sum = 0;
		while (nb > 0)
		{
			sum += (nb % 10);
			nb /= 10;
		}
		nb = sum;
	}
	ft_putnbr(nb);
	ft_putchar('\n');
}

int	main(void)
{
	sum_digits_recursive(1337);
	return (0);
}