/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 17:59:03 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/26 17:59:03 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int 	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int num_of_elemnts;
	
	if (min >= max )
	{
		*range = NULL;
		return (0);
	}

	num_of_elemnts = (max - min);
	*range = malloc(num_of_elemnts * sizeof(int));
	if (*range == NULL)
		return (-1);
	
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (num_of_elemnts); 
}

int main() // testing only 
{
	int *arr;
	int min = 5;
	int max = 10;
	ft_ultimate_range(&arr, min, max);
	int i = 0;
	while (i < (max - min))
	{
		printf("%d, ", arr[i]);
		i++;
	}
	free(arr);
	arr = NULL;
	return (0);
}