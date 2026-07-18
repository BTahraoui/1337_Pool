/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 19:31:29 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/18 19:31:29 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
	i++;
	}
	return (1);
}

int 	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (2);
		
	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}