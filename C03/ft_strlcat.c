/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 11:28:28 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/16 11:28:28 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	int dest_len;
	int src_len;
	unsigned int max_space;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);

	if (size <= (unsigned int)dest_len)
		return (size + src_len);

	max_space = size - dest_len - 1;
	while (i < max_space && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}