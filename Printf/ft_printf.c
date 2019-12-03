/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:06:44 by tpons             #+#    #+#             */
/*   Updated: 2019/12/03 12:48:14 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	special_putchar(char c)
{
	int	rtn;

	rtn = 0;
	if (c != '%')
	{
		write(1, &c, 1);
		rtn++;
	}
	return (rtn);
}

int	ft_printf(const char *input, ...)
{
	va_list args;
	t_flags	flags;
	int		rtn;
	int		i;

	i = 0;
	rtn = 0;
	va_start(args, input);
	while (input[i])
	{
		rtn += special_putchar(input[i]);
		if (input[i] == '%' && input[i + 1])
		{
			i++;
			flags = init_flags(flags);
			flags = parser_flags(&input[i], flags, args);
			while (is_flag(input[i]))
				i++;
			rtn += parser_conv(input[i], flags, args);
			i += flags.advance;
		}
		i++;
	}
	return (rtn);
}
