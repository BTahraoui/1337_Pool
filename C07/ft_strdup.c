/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 13:45:30 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/25 13:45:30 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strdup(char *str)
{
	char *copy;
	int i;
	int copy_len;

	copy_len = ft_strlen(str);
	copy = malloc((copy_len + 1) * sizeof(char)); // +1 for null term
	if (copy == NULL)  
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0'; // adding null at the end 
	return(copy);
}

int main()
{
	char str[] = "hello, world";
	char *s = ft_strdup(str);
	printf("%s", s);
	free(s);
	s = NULL;
	return (0);
}