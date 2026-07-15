/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 11:24:48 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/15 11:24:48 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char 	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z') // best approch turn everything lowercase then start.
			str[i] += 32;
		if (i == 0 || !((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					||  (str[i - 1] >= 'A' && str[i - 1] <= 'Z')|| 
						(str[i - 1] >= '0' && str[i - 1] <= '9'))
						&& (str[i] >= 'a' && str[i] <= 'z'))
						{
							str[i] = str[i] - 32;
						}
		i++;
	}
	return (str);
}