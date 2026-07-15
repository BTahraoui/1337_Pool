/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 12:23:46 by btahraoui         #+#    #+#             */
/*   Updated: 2026/07/09 12:23:46 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '0';
    while (a <= '9')
    {
        b = a + 1;
        while (b <= '9')
        {
            c = b + 1;
            while (c <= '9')
            {
                write (1, &a, 1);
                write (1, &b, 1);
                write (1, &c, 1);
                if(!(a == '7'))
                    write (1, ", ", 2);
                c++;
            }
            b++;
        }
        a++;
    }
}