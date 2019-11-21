/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_conv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:14:19 by tpons             #+#    #+#             */
/*   Updated: 2019/11/20 17:54:43 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	char_conv(t_flags flags, va_list args)
{
	if (flags.minus && flags.width > 1)
	{
		ft_putchar_fd(va_arg(args, int), 1);
		ft_adjust(flags.width - 1, ' ');
		return (flags.width);
	}
	else if (!flags.minus && flags.width > 1)
		ft_adjust(flags.width - 1, ' ');
	ft_putchar_fd(va_arg(args, int), 1);
	if (flags.width > 1)
		return (flags.width);
	return (1);
}
