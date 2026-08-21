/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 11:31:47 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/23 11:31:47 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char x)
{
	write(1, &x, 1);
}

int main(int argc, char *argv[])
{
	int i;
	int end;
	if (argc <= 1)
		return 0;
	end = argc - 1;
	while (end  > 0)
	{
		i = 0;
		while (argv[end][i] != '\0')
		{
			ft_putchar(argv[end][i]);
			i++;
		}
		ft_putchar('\n');
		end--;
	}
	return 0;
}
