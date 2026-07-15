/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 13:34:31 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/14 13:34:31 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_str_is_lowercase(char *str)
{
	int i;

	if (*str == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				return (0);
			i++;
		}
	return (1);
}