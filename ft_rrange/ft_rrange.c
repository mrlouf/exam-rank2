/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:02:51 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/16 16:56:17 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	get_size(int start, int end)
{
	int	size;

	size = 0;
	if (start == end)
		return (1);
	if (start > end)
	{
		while (start-- >= end)
			size++;
	}
	else if (start < end)
	{
		while (start++ <= end)
			size++;
	}
	return (size);
}

int	*ft_rrange(int start, int end)
{
	int	size;
	int	*range;
	int i = 0;

	size = get_size(start, end);
	range = (int *)malloc(sizeof(int) * size);
	if (start < end)
		while (size >= 0)
		{
			range[size - 1] = start++;
			size--;
		}
	else
		while (i <= size)
		{
			range[i] = end++;
			i++;
		}
	return (range);
}
/*
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int start = atoi(av[1]);
		int end = atoi(av[2]);
		int *res = ft_rrange(start, end);
		int len = get_size(start, end);
		int i = 0;

		printf("%d\n", len);
		while (i < len)
			printf("%d\n", res[i++]);
	}
}*/
