/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:20:28 by tpons             #+#    #+#             */
/*   Updated: 2019/10/23 10:55:06 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t l;

	i = 0;
	if (!dst || !src)
		return (0);
	l = ft_strlen(src);
	if (!dstsize)
		return (l);
	while (src[i] != '\0' && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize < l)
		dst[--i] = '\0';
	else if (dstsize != 0)
		dst[i] = '\0';
	return (l);
}
