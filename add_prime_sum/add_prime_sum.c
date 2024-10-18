/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:18:31 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/18 12:37:58 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	isprime(int nb)
{
	int i = 2;
	if (nb <= 1)
		return (0);
	while ((i * i) <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int n)
{
	char *base = "0123456789";
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &base[n % 10], 1);
}

int	ft_atoi(char *str)
{
	int	nb = 0;
	int i = 0;
	int sign = 1;
	if (str[i] == '-')
	{
		return (-1);
	}
	while (str[i])
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * sign);
}

int	main(int ac, char **av)
{
	if (ac == 2 && ft_atoi(av[1]) > 0)
	{
		int nb = ft_atoi(av[1]);
		int i = 1;
		int res = 0;
		while (i <= nb)
		{
			if (isprime(i))
				res += i;
			i++;
		}
		ft_putnbr(res);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
