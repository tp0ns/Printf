/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:23:10 by tpons             #+#    #+#             */
/*   Updated: 2019/10/15 16:22:43 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *sa;
	unsigned char *sb;

	sa = (unsigned char *)s1;
	sb = (unsigned char *)s2;
	if (!n)
		return (0);
	while (n-- && *sa == *sb)
	{
		if (!n)
			return (0);
		sa++;
		sb++;
	}
	return (*sa - *sb);
}
