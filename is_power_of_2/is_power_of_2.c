/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:37:24 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/09 19:04:51 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	while (n > 0)
	{
	if (n == 2)
			return (1);
		else
			n /= 2;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", is_power_of_2(256));
	return (0);
}
*/
