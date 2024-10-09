/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:20:50 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/09 16:46:16 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	is_reject(char c, char *charset)
{
	int	i = -1;
	while (charset[++i])
	{
		if (c == charset[i])
			return (1);
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	i = 0;
	while (s[i] && is_reject(s[i], (char *)reject) == 0)
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *s = "!!!!TEST";
	char *reject = "XC";

	printf("%lu\n", ft_strcspn(s, reject));
	return (0);
}*/
