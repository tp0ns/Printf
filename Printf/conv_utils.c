/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 14:57:34 by tpons             #+#    #+#             */
/*   Updated: 2019/11/18 15:06:39 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	parser_conv(char *input, t_flags flags, va_list args)
{
	
}
// void	parser(const char *input, va_list args)
// {
// 	int nb;

// 	nb = 0;
// 	if (*input == 'c')
// 		ft_putchar_fd(va_arg(args, int), 1);
// 	if (*input == 's')
// 		ft_putstr_fd(va_arg(args, char *), 1);
// 	if (*input == 'p')
// 		ft_putunbr_base(va_arg(args, unsigned long long), "0123456789abcdef");
// 	if (*input == 'd' || *input == 'i')
// 		ft_putnbr_fd(va_arg(args, int), 1);
// 	if (*input == 'u')
// 	{
// 		nb = (unsigned int)(4294967295 + 1 + va_arg(args, unsigned int));
// 		ft_putunbr_fd(nb, 1);
// 	}
// 	if (*input == 'x')
// 		ft_putunbr_base(va_arg(args, unsigned int), "0123456789abcdef");
// 	if (*input == 'X')
// 		ft_putunbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
// 	if (*input == '%')
// 		ft_putchar_fd('%', 1);
// }
