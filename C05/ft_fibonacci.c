/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 18:48:47 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/18 18:48:47 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
int main()
{
	int i = 0;
	int nb = 15;
	while (i < nb)
	{
		printf("%d, ", ft_fibonacci(i));
		i++;
	}
	return (0);
}