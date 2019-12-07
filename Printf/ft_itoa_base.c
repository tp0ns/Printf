/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 13:53:37 by tpons             #+#    #+#             */
/*   Updated: 2019/12/07 17:03:36 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_length(unsigned int n, int b)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= b;
		i++;
	}
	return (i);
}

int			putnbr(unsigned int nb, char *base, char *str, int l)
{
	int	b;

	b = ft_strlen(base);
	if (l == 0)
	{
		str[l] = base[nb % b];
		return (0);
	}
	else
	{
		str[l] = base[nb % b];
		return (putnbr(nb / b, base, str, --l));
	}
}

char		*ft_itoa_base(unsigned int nbr, char *base)
{
	int		b;
	char	*str;
	int		l;

	b = ft_strlen(base);
	l = num_length(nbr, b);
	if (!(str = malloc(sizeof(char) * l + 1)))
		return (0);
	str[l] = '\0';
	putnbr(nbr, base, str, l - 1);
	return (str);
}
