/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 14:50:30 by tpons             #+#    #+#             */
/*   Updated: 2019/11/18 15:04:27 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	init_flags(t_flags flags)
{
	flags.minus = 0;
	flags.zero = 0;
	flags.width = -1;
	flags.precision = -1;
	flags.wild = 0;
	flags.advance = 0;
	flags.rtn = 0;
}

int		is_flag(char c)
{
	if (c == '-' || c == '.' || c == '*' || ft_isdigit(c))
		return (1);
	return (0);
}

t_flags	parser_flags(char *input, t_flags flags, va_list args)
{
	int	i;
	int point;

	i = 0;
	point = 0;
	while (input[i] && is_flag(input[i]))
	{
		if (input[i] == '-')
			flags.minus = 1;
		else if (input[i] == '0' && flags.width < 1)
			flags.zero = 1;
		else if (ft_isdigit(input[i]) && !point)
			flags.width = (flags.width * 10) + (input[i] - '0');
		else if (input[i] == '.')
			point = 1;
		else if (ft_isdigit(input[i]) && point)
			flags.precision = (flags.precision * 10) + (input[i] - '0');
		else if (input[i] == '*')
		{
			if (flags.width < 0)
				flags.width = va_arg(args, int);
			else if (point)
				flags.precision = va_arg(args, int);
		}
		i++;
	}
	flags.advance = i;
	return (flags);
}
