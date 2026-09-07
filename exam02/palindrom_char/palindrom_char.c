/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palindrom_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-08-28 10:51:17 by btahraoui         #+#    #+#             */
/*   Updated: 2026-08-28 10:51:17 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    int i;
    int end = 0;
    i = 0;
    while (argv[1][i])
        i++;
    end = i - 1;
    i = 0;
    while (i < end)
    {
        if (argv[1][i] != argv[1][end])
        {
            write(1, "NP\n", 3);
            return (0);
        }
        i++;
        end--;
    }
    write(1, "P\n", 2);
    return 0;
}
