/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 12:13:44 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/11 12:13:44 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void 	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

int main(void)
{
	int x;
	int y;

	x = 20;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	printf("x = %d, y = %d", x, y);
	return (0);
}