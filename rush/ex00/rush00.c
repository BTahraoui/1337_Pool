/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:32:03 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/13 11:32:03 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char x);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		if (i == 0)  // hundel first row 
		{
			while (j < x)
			{
				if (j == 0 || j == x - 1)
				{
					ft_putchar('o');
				}
				else    
					ft_putchar('-');
				j++;
			}
		}
		else if (i == y - 1) // hundel bottom row
		{
			while (j < x)
			{
				if (j == 0 || j == x -1)
					ft_putchar('o');
				else
					ft_putchar('-');
				j++;
			}
		}
		else  // hundel mid row 
		{
			while (j < x)
			{
				if (j == 0 || j == x - 1)
					ft_putchar('|');
				else 
					ft_putchar(' ');
				j++;
			}
		}
		ft_putchar('\n');
		i++;
	}
}