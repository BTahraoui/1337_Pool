/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 19:37:24 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/15 19:37:24 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	*ft_strstr(char *str, char *to_find)
{
	int counter; // count or index.
	int checker; // check if the index eq to checker so we can see the diff.

	counter = 0;
	if (to_find[counter] == '\0')
		return (str);
	
	while (str[counter] != '\0')
	{
		checker = 0;
		while (str[counter + checker] == to_find[checker])
			checker++;
		if (to_find[checker] == '\0')
			return (&str[counter]);
		counter ++;
	}
}