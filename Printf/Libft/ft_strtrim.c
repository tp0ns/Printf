/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:19:36 by tpons             #+#    #+#             */
/*   Updated: 2019/10/22 13:16:45 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_in(char const s1, char const *set)
{
	while (*set)
		if (s1 == *set++)
			return (1);
	return (0);
}

static int		how_much(char const *s1, char const *set, size_t slen, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = slen;
	while (is_in(s1[i], set) && s1[i])
		i++;
	if (n)
		return (i);
	if (i != slen)
		while (is_in(s1[--j], set))
			i++;
	return (slen - i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	slen;
	size_t	strlen;

	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	slen = ft_strlen(s1);
	strlen = how_much(s1, set, slen, 0) + 1;
	if (!(str = malloc(sizeof(char) * strlen)))
		return (0);
	ft_memmove(str, s1 + how_much(s1, set, slen, 1), strlen);
	str[strlen - 1] = '\0';
	return (str);
}
