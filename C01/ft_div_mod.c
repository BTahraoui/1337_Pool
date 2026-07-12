/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 12:04:21 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/11 12:04:21 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int x;
	int y;
	int d = 0;
	int m = 0;

	x = 10;
	y = 2;
	ft_div_mod(x, y, &d, &m);
	printf("div = %d, mod = %d", d, m);
	return (0);
}