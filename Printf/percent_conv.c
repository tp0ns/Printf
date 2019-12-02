/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:20:20 by tpons             #+#    #+#             */
/*   Updated: 2019/12/02 17:12:04 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	percent_conv(t_flags flags)
{
	int					rtn;

	rtn = 0;
	if (flags.minus)
	{
		ft_putchar_fd('%', 1);
		if (flags.zero)
			rtn += ft_adjust(flags.width - 1, '0');
		else
			rtn += ft_adjust(flags.width - 1, ' ');
	}
	else if (!flags.minus)
	{
		if (flags.zero)
			rtn += ft_adjust(flags.width - 1, '0');
		else
			rtn += ft_adjust(flags.width - 1, ' ');
		ft_putchar_fd('%', 1);
	}
	return (rtn + 1);
}
