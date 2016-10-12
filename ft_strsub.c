/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 18:30:23 by azhuk             #+#    #+#             */
/*   Updated: 2016/10/11 11:02:28 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	i = 0;
	/*sub_str = (char *)malloc(sizeof(char) * (len + 1));*/
	sub_str = ft_strnew(len);
	if (sub_str == NULL)
		return (NULL);
	while (s && s[start] && i < len)
		sub_str[i++] = s[start++];
	sub_str[i] = '\0';
	return (sub_str);
}
