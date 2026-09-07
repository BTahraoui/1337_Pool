/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 13:43:20 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/15 13:43:20 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	str_k(char *str)
{	
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' &&  str[i] <= 'Z'){
			str[i] = str[i] + 32;
		}
		i++;
	}
} 
int 	ft_strcmp(char *s1, char*s2)
{
	int i;

	i = 0;
	str_k(s1);
	str_k(s2);
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int main(void)
{
	char s1[] = "alae";
	char s2[] = "Alae";
	printf("%d\n", ft_strcmp(s1, s2));
	return 0;
}