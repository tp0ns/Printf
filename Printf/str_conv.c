/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_conv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:14:36 by tpons             #+#    #+#             */
/*   Updated: 2019/11/21 12:10:17 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	str_precision(char *str, int len, int precision, int mod)
{
	int	i;

	i = 0;
	if (precision != -1 && len <= precision)
		while (str[i])
		{
			if (mod)
				write(1, &str[i], 1);
			i++;
		}
	else if (precision != -1 && len > precision)
		while (i < precision)
		{
			if (mod)
				write(1, &str[i], 1);
			i++;
		}
	else
		while (str[i])
		{
			if (mod)
				write(1, &str[i], 1);
			i++;
		}
	return (i);
}

int	str_adjust(int zero, int width)
{
	int rtn;

	rtn = 0;
	if (zero)
		rtn += ft_adjust(width, '0');
	else
		rtn += ft_adjust(width, ' ');
	return (rtn);
}

int	str_conv(t_flags flags, va_list args)
{
	char	*str;
	int		len;
	int		rtn;
	int		howm;

	rtn = 0;
	str = va_arg(args, char *);
	if (!str)
		str = ft_strdup("(null)");
	len = ft_strlen(str);
	howm = str_precision(str, len, flags.precision, 0);
	if (flags.minus && flags.width > howm)
	{
		rtn += str_precision(str, len, flags.precision, 1);
		rtn += str_adjust(flags.zero, (flags.width - len));
	}
	else if (!flags.minus && flags.width > howm)
	{
		rtn += str_adjust(flags.zero, (flags.width - howm));
		rtn += str_precision(str, len, flags.precision, 1);
	}
	else
		rtn += str_precision(str, len, flags.precision, 1);
	return (rtn);
}
