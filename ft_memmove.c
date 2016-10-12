/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <azhuk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 07:16:35 by azhuk             #+#    #+#             */
/*   Updated: 2016/10/06 09:57:00 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*d;
	const char	*s;

	d = str1;
	s = str2;
	if (s > d)
		ft_memcpy(d, s, n);
	else if (s < d)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (str1);
}
