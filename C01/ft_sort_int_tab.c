/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 10:50:22 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/12 10:50:22 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int index;
	int j;
	int end;
	int temp;

	end = size - 1;  //end of the array
	index = 0; 
	while (index < size)
	{
		j = 0;
		while (j < end - index) //safe guard + the last num is always in it place that why we sub one each run
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		index++;
	}
}