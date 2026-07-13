/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 16:12:32 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/13 16:12:32 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_putchar(char x);
void	print_top_row(int x)  
{
	int	j;

	j = 0;
	while (j < x)
	{
		if (j == 0 || j == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		j++;
	}
	ft_putchar('\n');
}

void	print_middle_row(int x)
{
	int	j;

	j = 0;
	while (j < x)
	{
		if (j == 0 || j == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		j++;
	}
	ft_putchar('\n');
}

void	print_bottom_row(int x)
{
	int	j;

	j = 0;
	while (j < x)
	{
		if (j == 0 || j == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
			print_top_row(x);
		else if (i == y - 1)
			print_bottom_row(x);
		else
			print_middle_row(x);
		i++;
	}
}