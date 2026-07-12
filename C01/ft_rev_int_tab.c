/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 10:30:17 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/12 10:30:17 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int temp;
	int end;

	index = 0;
	end = size - 1;
	while (index < end)
	{
		temp = tab[index];
		tab[index] = tab[end];
		tab[end] = temp;
		end--;
		index++;
	}	
}