/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 19:10:40 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/15 19:10:40 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	*ft_strcat(char *dest, char *src)
{
	int dest_length;
	int counter;

	dest_length = 0;
	counter = 0;
	while (dest[dest_length] != '\0')
		dest_length++;
	while (src[counter] != '\0')
	{
		dest[dest_length + counter] = src[counter];
		counter++;
	}
	dest[dest_length + counter] = '\0';
	return (dest);
}