/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_conv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:17:05 by tpons             #+#    #+#             */
/*   Updated: 2019/11/22 17:28:34 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexa_adjust(t_flags flags, int len)
{
	int	rtn;

	rtn = 0;
	if (flags.zero && !flags.minus && flags.precision < 0)
		rtn += ft_adjust(flags.width - len, '0');
	else if (flags.precision >= len)
		rtn += ft_adjust(flags.width - flags.precision, ' ');
	else
		rtn += ft_adjust(flags.width - len, ' ');
	return (rtn);
}

int	hexa_precision(int precision, int len)
{
	int	i;

	i = 0;
	if (precision)
		while (i < precision - len)
		{
			write(1, "0", 1);
			i++;
		}
	return (i);
}

int	hexa_minus(t_flags flags, int len, char *str)
{
	int	rtn;

	rtn = 0;
	if (flags.minus)
	{
		rtn += hexa_precision(flags.precision, len);
		rtn += ft_putstr_fd(str, 1);
		rtn += hexa_adjust(flags, len);
	}
	else if (!flags.minus)
	{
		rtn += hexa_adjust(flags, len);
		rtn += hexa_precision(flags.precision, len);
		rtn += ft_putstr_fd(str, 1);
	}
	return (rtn);
}

int	hexa_conv(t_flags flags, va_list args, char *base)
{
	char	*str;
	int		len;
	int		rtn;

	str = ft_itoa_base(va_arg(args, unsigned int), base);
	len = ft_strlen(str);
	rtn = 0;
	if (flags.precision == 0 && *str == '0')
	{
		ft_adjust(flags.width, ' ');
		return (0);
	}
	rtn += hexa_minus(flags, len, str);
	free(str);
	return (rtn);
}
