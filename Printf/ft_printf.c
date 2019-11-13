/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:06:44 by tpons             #+#    #+#             */
/*   Updated: 2019/11/13 18:16:31 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parser(const char *input, va_list list)
{
	int nb;

	nb = 0;
	if (*input == 'c')
		ft_putchar_fd(va_arg(list, int), 1);
	if (*input == 's')
		ft_putstr_fd(va_arg(list, char *), 1);
	if (*input == 'p')
		ft_putnbr_base(va_arg(list, unsigned long long), "0123456789abcdef");
	if (*input == 'd' || *input == 'i')
		ft_putnbr_fd(va_arg(list, int), 1);
	if (*input == 'u')
	{
		nb = (unsigned int)(4294967295 + 1 + va_arg(list, unsigned int));
		ft_putunbr_fd(nb, 1);
	}
	if (*input == 'x')
		ft_putnbr_base(va_arg(list, unsigned int), "0123456789abcdef");
	if (*input == 'X')
		ft_putnbr_base(va_arg(list, unsigned int), "0123456789ABCDEF");
	if (*input == '%')
		ft_putchar_fd('%', 1);
}

int		ft_printf(const char *input, ...)
{
	va_list	list;
	int		i;

	i = 0;
	va_start(list, input);
	while (input[i])
	{
		if (input[i] == '%' && input[i + 1])
		{
			parser(&input[i + 1], list);
			i += 2;
		}
		write(1, &input[i], 1);
		i++;
	}
	return (1);
}
