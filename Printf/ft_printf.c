/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:06:44 by tpons             #+#    #+#             */
/*   Updated: 2019/11/18 19:32:42 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *input, ...)
{
	va_list args;
	t_flags	flags;
	int		rtn;
	int		i;

	i = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%' && input[i + 1])
		{
			i++;
			flags = init_flags(flags);
			flags = parser_flags(&input[i], flags, args);
			while (is_flag(input[i]))
				i++;
			rtn = parser_conv(input[i], flags, args);
			i += flags.advance + 1;
		}
		write(1, &input[i], 1);
		i++;
	}
	return (rtn);
}
