/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:57:07 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/11 14:00:44 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i++], 1);
	}
}

static int isupper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

static int isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int	i = 1;
	int	j = 0;

	if (ac > 1)
	{
		while (av[i])
		{
			while (av[i][j])
			{
				if (isupper(av[i][j]) == 1)
					av[i][j] = av[i][j] + 32;
				if (isalpha(av[i][j]) == 1 && (isalpha(av[i][j - 1]) == 0 || av[i][j - 1] == '\0'))
					av[i][j] = av[i][j] - 32;
				j++;
			}
			i++;
			j = 0;
		}
		i = 1;
		while (av[i])
		{
			putstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
