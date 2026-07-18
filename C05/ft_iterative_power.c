/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 10:32:56 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/18 10:32:56 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int 	ft_iterative_power(int nb, int power)
{
	int res;
	res = 1; 
	if (power < 0)  // A power lower than 0 returns 0.
		return (0);
	else if (power == 0) // We’ve decided that 0 power 0 will returns 1
		return (1);
	while (power != 0)
	{
		res *=  nb;
		power--;
	}
	return (res);
}
