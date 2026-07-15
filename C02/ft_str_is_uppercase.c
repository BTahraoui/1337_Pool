/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 13:35:11 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/14 13:35:11 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_str_is_uppercase(char *str)
{
	int i;

	if (*str == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
		{
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
				return (0);
			i++;
		}
	return (1);
}