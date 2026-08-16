/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:30:21 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/10 13:30:21 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char x)
{
	write (1, &x, 1);
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
		ft_putchar(nb % 10 + 48);
	}
}
int main()
{
	ft_putchar(42);
	return (0);
}
