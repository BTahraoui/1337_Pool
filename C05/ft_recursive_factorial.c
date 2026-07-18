/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 12:39:35 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/17 12:39:35 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_recursive_factorial(int nb)
{

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return(nb * ft_recursive_factorial(nb - 1));

}