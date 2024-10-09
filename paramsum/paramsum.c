/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:06:31 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/09 19:24:29 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int	nb)
{
	char *base = "0123456789";

	if (nb == 2147483647)
		write (1, "2147483647", 10);
	while (nb > 9)
	{
		write(1, &base[nb % 10], 1);
		nb /= 10;
	}
	write(1, &base[nb % 10], 1);
}

int	main(int ac, char **av)
{
	(void)av;
	int	i;

//	if (ac == 1)
//	{
//		write(1, "0\n", 1);
//		return (0);
//	}
	i = ac;
	putnbr(--i);
	write(1, "\n", 1);
	return (0);
}
