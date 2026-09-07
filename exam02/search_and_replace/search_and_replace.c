/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr@gmail.com>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-08-28 10:31:25 by btahraoui         #+#    #+#             */
/*   Updated: 2026-08-28 10:31:25 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char x)
{
	write(1, &x, 1);
}

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc != 4 || argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		ft_putchar('\0');
		return 0;
	} 

	while (argv[1][i])
	{
		if (argv[1][i] == argv[2][0])
			ft_putchar(argv[3][0]);
		else
			ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\0');
	return 0;
}
