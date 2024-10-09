/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:53:40 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/09 17:14:49 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*somersault;

	i = 0;
	somersault = begin_list;
	while (somersault != 0)
	{
		somersault = somersault->next;
		i++;
	}
	return (i);
}
