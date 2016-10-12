/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <azhuk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:00:59 by azhuk             #+#    #+#             */
/*   Updated: 2016/09/27 09:46:39 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *lett, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)lett)[i] = 0;
		i++;
	}
}
