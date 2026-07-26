/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 13:21:25 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/26 13:21:25 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int 	*ft_range(int min, int max)
{
	int index;
	int num_of_elements;
	int *P;

	if (min >= max )
		return (NULL);
	num_of_elements = max - min;
	P = malloc(num_of_elements * sizeof(int));
	if (P == NULL)
		return (NULL);
	index = 0;
	while (min < max)
	{
		P[index] = min;  // go to slot 0 and give it min;
		min++;   // incriment the min by 1;
		index++; 
	}
	return (P);
}
int main()  // main only for implementing c and testing dont use it in pool
{
	int *arr;
	int i;
	int min = 5;
	int max = 15;

	arr = ft_range(min, max);
	for (size_t i = 0; i < (max - min); i++)
	{
		printf("%d, ", arr[i]);
	}
	
	free(arr);
	arr = NULL;
	return (0);

}