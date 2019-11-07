/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:19:43 by tpons             #+#    #+#             */
/*   Updated: 2019/10/16 16:36:46 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		num_length(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char		*fill_string(char *str, int n, int l, long nbr)
{
	if (n < 0)
	{
		nbr = -nbr;
		str[0] = '-';
	}
	str[--l] = '\0';
	while (nbr / 10 >= 1)
	{
		str[--l] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (n < 0)
		str[1] = (nbr % 10) + '0';
	else
		str[0] = (nbr % 10) + '0';
	return (str);
}

char			*ft_itoa(int n)
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
