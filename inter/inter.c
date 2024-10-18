/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:06:33 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/18 11:15:58 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		unsigned char seen[256] = {0};
		int i = 0;
		int j = 0;
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j] && !seen[(unsigned char)av[1][i]])
				{
					seen[(unsigned char)av[1][i]] = 1;
					write(1, &av[1][i], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
