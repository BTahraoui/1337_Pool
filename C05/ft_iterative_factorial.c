/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:53:35 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/17 11:53:35 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_iterative_factorial(int nb)
{
	int res;
	
	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}