/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:05:08 by tpons             #+#    #+#             */
/*   Updated: 2019/10/23 10:57:03 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		strs_len(char const *s, char c)
{
	int i;
	int n;

	i = 0;
	n = 1;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (i > 0 && s[i] && s[i - 1] == c)
			n++;
		if (s[i])
			i++;
	}
	if (i > 0 && n == 1 && s[i - 1] == c)
		return (n);
	if (s[0] != c)
		n++;
	return (n);
}

static int		s_len(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (s[i] != c && s[i])
	{
		i++;
		n++;
	}
	return (n);
}

static int		fill_it(char **strs, char const *s, char c, int ls)
{
	int	i;
	int	j;
	int k;
	int slen;

	i = 0;
	k = 0;
	while (i < ls - 1)
	{
		j = 0;
		while (s[k] == c && s[k])
			k++;
		slen = s_len(&s[k], c);
		if (!(strs[i] = malloc(sizeof(char) * slen)))
			return (0);
		while (j + 1 < slen)
			strs[i][j++] = s[k++];
		strs[i][j] = '\0';
		i++;
	}
	return (1);
}

char			**ft_split(char const *s, char c)
{
	int		ls;
	char	**strs;

	if (!s || !*s)
	{
		if (!(strs = malloc(sizeof(char *))))
			return (NULL);
		*strs = 0;
		return (strs);
	}
	ls = strs_len(s, c);
	if (!(strs = malloc(sizeof(char *) * ls)))
		return (NULL);
	if (!fill_it(strs, s, c, ls))
	{
		free(strs);
		return (NULL);
	}
	strs[ls - 1] = 0;
	return (strs);
}
