/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:26:49 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/09 19:48:27 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	start;
	int	end;
	int	flag;	// pour eviter de mettre le dernier espace en debut de string

	if (ac == 2)
	{
		i = -1;
		while (av[1][++i] != '\0')
			;
		while (i >= 0)
		{
			while (av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t' )
				i--;
			end = i;
			while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t' )
				i--;
			start = i + 1;
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			flag = i;
			if (flag > 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
