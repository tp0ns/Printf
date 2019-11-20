/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 14:57:34 by tpons             #+#    #+#             */
/*   Updated: 2019/11/19 15:13:24 by tpons            ###   ########.fr       */
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
	// else if (input == 'p')
	// 	rtn = pos_conv(flags, args);
	// else if (input == 'd' || input == 'i')
	// 	rtn = int_conv(flags, args);
	else if (input == 'u')
		rtn = unsign_conv(flags, args);
	// else if (input == 'x')
	// 	rtn = hexa_conv(flags, args, "0123456789abcdef");
	// else if (input == 'X')
	// 	rtn = hexa_conv(flags, args, "0123456789ABCDEF");
	// else if (input == '%')
	// 	rtn = char_conv(flags, args);
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

/*void	parser(const char *input, va_list args)
{
	int nb;

	nb = 0;
	if (*input == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	if (*input == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	if (*input == 'p')
		ft_putunbr_base(va_arg(args, unsigned long long), "0123456789abcdef");
	if (*input == 'd' || *input == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	if (*input == 'u')
	{
		nb = (unsigned int)(4294967295 + 1 + va_arg(args, unsigned int));
		ft_putunbr_fd(nb, 1);
	}
	if (*input == 'x')
		ft_putunbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	if (*input == 'X')
		ft_putunbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (*input == '%')
		ft_putchar_fd('%', 1);
}*/
