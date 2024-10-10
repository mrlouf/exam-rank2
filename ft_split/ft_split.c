/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:56:09 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/10 13:45:29 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

int	ft_countwords(char *str)
{
	int i;
	int cw;

	i = 0;
	cw = 0;
	while (str[i])
	{
		if (ft_isspace(str[i]) == 0 && (ft_isspace(str[i + 1]) == 1 || str[i + 1] == '\0'))
			cw++;
		i++;
	}
	return (cw);
}

char	*ft_substr(char *str, int start, int len)
{
	char *sub;
	int	i;

	i = 0;
	sub = (char*)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char **ft_getword(char **strs, char *main)
{
	int i;
	int j;
	int len;

	i = -1;
	j = 0;
	len = 0;
	while(main[++i])
	{
		if (ft_isspace(main[i]) == 0)
			len++;
		if (ft_isspace(main[i]) == 0 && (ft_isspace(main[i + 1]) == 1 || main[i + 1] == '\0'))
		{
			strs[j] = ft_substr(main, (i - len + 1), len);
			len = 0;
			j++;
		}
	}
	strs[j] = NULL;
	return (strs);
}


char    **ft_split(char *str)
{
	char	**array;
	int	cw;

	cw = ft_countwords(str);
	array = (char**)malloc(sizeof(char*) * (cw + 1));
	array = ft_getword(array, str);
	
	// profit

	return (array);
}
/*
int	main(int ac, char **av)
{
	char **array = ft_split(av[1]);
	int	i = 0;
	if (ac == 2)
	{
		while (array[i] != NULL)
		{
			printf("%s\n", array[i]);
			i++;
		}
	}
}*/
