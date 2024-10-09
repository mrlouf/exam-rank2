/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:19:09 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/09 18:32:51 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			while (av[1][i] == ' ' || av[1][i] == '\t')
				i++;
			while (av[1][i] != '\0')
			{
				if (av[1][i] == ' ' || av[1][i] == '\t')
				{
					write(1, "\n", 1);
					return (0);
				}
				write(1, &av[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);

	return (0);
}
