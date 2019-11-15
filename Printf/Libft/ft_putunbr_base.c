/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:48:57 by tpons             #+#    #+#             */
/*   Updated: 2019/11/15 11:38:32 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	put_nbr(unsigned int nb, char *base, unsigned int b)
{
	if (nb >= b)
		put_nbr(nb / b, base, b);
	write(1, &base[nb % b], 1);
}

void	ft_putunbr_base(unsigned int nbr, char *base)
{
	unsigned int nb;
	unsigned int b;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nb = -nbr;
	}
	else
		nb = nbr;
	b = ft_strlen(base);
	if (b)
		put_nbr(nb, base, b);
}
