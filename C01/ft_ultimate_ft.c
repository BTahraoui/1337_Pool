/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 11:23:51 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/11 11:23:51 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)  // main only for testing dont use it in pool
{
	int A;

	A = 0;
	int *p1 = &A;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;
	ft_ultimate_ft(p9);
	printf("The value of A changed using a pointer from A = 0 to A = %d\n", A);
	printf("to see the address of the pointer p9 we use = %p\n", (void*)&p9);
	printf("To see the value stored inside p9 which is the Address of p8 We use = %p\n", (void*)p9);
	printf("The varible A Adress is = %p", (void*)&A);
	return (0);
}