/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:56:35 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/14 13:34:08 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int g = 1;

	if (a == b)
		return (a);
	if (a == 0 || b == 0)
		return (0);
	while (1)
	{
		if (g % a == 0 && g % b == 0)
			return (g);
		g++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("%u\n", lcm(25, 15));
}*/
