/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 14:50:30 by tpons             #+#    #+#             */
/*   Updated: 2019/12/03 13:00:57 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	init_flags(t_flags flags)
{
	flags.minus = 0;
	flags.zero = 0;
	flags.width = 0;
	flags.point = 0;
	flags.precision = -1;
	flags.advance = 0;
	return (flags);
}

int		is_flag(char c)
{
	if (c == '-' || c == '.' || c == '*' || ft_isdigit(c))
		return (1);
	return (0);
}

t_flags	treat_flags(char input, t_flags flags, va_list args)
{
	if (input == '-')
		flags.minus = 1;
	else if (input == '0' && flags.width < 1)
		flags.zero = 1;
	else if (ft_isdigit(input) && !flags.point)
		flags.width = (flags.width * 10) + (input - '0');
	else if (input == '.')
	{
		flags.point = 1;
		flags.precision = 0;
	}
	else if (ft_isdigit(input) && flags.point)
	{
		flags.precision = (flags.precision * 10) + (input - '0');
	}
	else if (input == '*')
	{
		if (flags.point)
			flags.precision = va_arg(args, int);
		else if (flags.width < 1)
		{
			flags.width = va_arg(args, int);
			if (flags.width < 0)
			{
				flags.width *= -1;
				flags.minus = 1;
			}
		}
	}
	return (flags);
}

t_flags	parser_flags(const char *input, t_flags flags, va_list args)
{
	int	i;

	i = 0;
	while (input[i] && is_flag(input[i]))
	{
		flags = treat_flags(input[i], flags, args);
		i++;
	}
	return (flags);
}
