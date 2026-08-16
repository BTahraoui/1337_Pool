/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 14:52:03 by btahraoui         #+#    #+#             */
/*   Updated: 2026/08/16 14:52:03 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void    print_rows(int x, char start, char mid, char end)
{
    int i = 0;
    while(i < x)
    {
        if(i == 0)
            ft_putchar(start);
        else if(i == x - 1)
            ft_putchar(end);
        else
            ft_putchar(mid);
        i++;
    }
    ft_putchar('\n');
}

void rush(int x, int y)
{
    if(x <= 0 || y <= 0)
        return;
    int i = 0;
    while (i < y)
    {
        if(i == 0)
            print_rows(x , 'A' , 'B', 'A');
        else if(i == y - 1)
            print_rows(x , 'A' , 'B', 'A');
        else
            print_rows(x , 'B' , ' ', 'B');
        i++;
    }
    
}
int main()
{
    rush(5, 4);
}