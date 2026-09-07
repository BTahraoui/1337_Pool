/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stitch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-08-28 18:15:00 by btahraoui          #+#    #+#             */
/*   Updated: 2026-08-28 18:15:00 by btahraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	word_pos;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	word_pos = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			word_pos = 0;
			write(1, &argv[1][i], 1);
		}
		else
		{
			if (word_pos % 2 == 0 && (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
				argv[1][i] -= 32;
			else if (word_pos % 2 != 0 && (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
				argv[1][i] += 32;
			write(1, &argv[1][i], 1);
			word_pos++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}