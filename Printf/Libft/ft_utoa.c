/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:19:43 by tpons             #+#    #+#             */
/*   Updated: 2019/11/20 11:19:11 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		num_length(long n)
{
	int	i;

	i = 1;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char		*fill_string(char *str, unsigned int n, int l, long nbr)
{
	str[--l] = '\0';
	while (nbr / 10 >= 1)
	{
		str[--l] = (nbr % 10) + '0';
		nbr /= 10;
	}
	str[0] = (nbr % 10) + '0';
	return (str);
}

char			*ft_itoa(unsigned int n)
{
	char	*str;
	int		l;
	long	nbr;

	nbr = n;
	l = num_length(nbr);
	if (n == 0)
		return (str = ft_strdup("0"));
	if (!(str = malloc(sizeof(char) * l)))
		return (0);
	str = fill_string(str, n, l, nbr);
	return (str);
}
