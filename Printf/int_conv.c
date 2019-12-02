/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_conv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:15:20 by tpons             #+#    #+#             */
/*   Updated: 2019/12/02 17:17:06 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	int_adjust(t_flags flags, int len, int nb)
{
	int	rtn;

	rtn = 0;
	if (flags.zero)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			rtn++;
		}
		rtn += ft_adjust(flags.width - len, '0');
	}
	else if (flags.precision >= len)
	{
		if (nb < 0)
			rtn += ft_adjust(flags.width - flags.precision - 1, ' ');
		else
			rtn += ft_adjust(flags.width - flags.precision, ' ');
	}
	else
		rtn += ft_adjust(flags.width - len, ' ');
	return (rtn);
}

int	int_precision(t_flags flags, int len, int nb)
{
	int	i;
	int rtn;

	i = 0;
	rtn = 0;
	if (nb < 0 && flags.precision <= len && !flags.zero)
	{
		write(1, "-", 1);
		return (1);
	}
	if (flags.precision > 0)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			rtn++;
			i--;
		}
		while (i < flags.precision - len)
		{
			write(1, "0", 1);
			i++;
			rtn++;
		}
	}
	return (rtn);
}

int	int_minus(t_flags flags, int len, char *str, int nb)
{
	int	rtn;

	rtn = 0;
	if (nb < 0)
		str++;
	if (flags.minus)
	{
		rtn += int_precision(flags, len, nb);
		rtn += ft_putstr_fd(str, 1);
		rtn += int_adjust(flags, len, nb);
	}
	else if (!flags.minus)
	{
		rtn += int_adjust(flags, len, nb);
		rtn += int_precision(flags, len, nb);
		rtn += ft_putstr_fd(str, 1);
	}
	return (rtn);
}

int	int_conv(t_flags flags, va_list args)
{
	int		nb;
	char	*str;
	int		len;
	int		rtn;

	nb = va_arg(args, int);
	str = ft_itoa(nb);
	len = ft_strlen(str);
	rtn = 0;
	if (flags.zero && (flags.minus || flags.precision >= 0))
		flags.zero = 0;
	if (flags.precision == 0 && *str == '0')
	{
		rtn += ft_adjust(flags.width, ' ');
		return (rtn);
	}
	rtn += int_minus(flags, len, str, nb);
	free(str);
	return (rtn);
}
