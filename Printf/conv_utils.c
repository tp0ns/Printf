/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 14:57:34 by tpons             #+#    #+#             */
/*   Updated: 2019/12/03 10:58:39 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parser_conv(char input, t_flags flags, va_list args)
{
	int rtn;
	int nb;

	rtn = 0;
	nb = 0;
	if (input == 'c')
		rtn = char_conv(flags, args);
	else if (input == 's')
		rtn = str_conv(flags, args);
	else if (input == 'p')
		rtn = pos_conv(flags, args);
	else if (input == 'd' || input == 'i')
		rtn = int_conv(flags, args);
	else if (input == 'u')
		rtn = unsign_conv(flags, args);
	else if (input == 'x')
		rtn = hexa_conv(flags, args, "0123456789abcdef");
	else if (input == 'X')
		rtn = hexa_conv(flags, args, "0123456789ABCDEF");
	else if (input == '%')
		rtn = percent_conv(flags);
	return (rtn);
}

int	ft_adjust(int width, char c)
{
	int i;

	i = 0;
	while (i < width)
	{
		ft_putchar_fd(c, 1);
		i++;
	}
	return (i);
}
