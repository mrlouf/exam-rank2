/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:57:38 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/11 17:47:19 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static int	isspace(char c)
{
	return (c == ' ' || c == '\t');
}

int	main(int ac, char **av)
{
		int start = 0;
		int end = 0;

	if (ac == 2)
	{
		while (av[1][start])
			start++;
		start--;
		while (start >= 0)
		{
			if (isspace(av[1][start]))
				write(1, &av[1][start], 1);
			if (!isspace(av[1][start]) && (isspace(av[1][start - 1]) || start == 0))
			{
				end = start;
				while (av[1][end] && !isspace(av[1][end]))
				{
					write(1, &av[1][end], 1);
					end++;
				}
			}
			start--;
		}
	}
	write(1, "\n", 1);
}
