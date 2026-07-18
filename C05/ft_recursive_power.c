/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 10:44:03 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/18 10:44:03 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_recursive_power(int nb, int power)
{
	if (power < 0)  // A power lower than 0 returns 0.
		return (0);
	else if (power == 0) // We’ve decided that 0 power 0 will returns 1
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}