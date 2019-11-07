/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:06:44 by tpons             #+#    #+#             */
/*   Updated: 2019/11/07 18:47:09 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parser(const char *input, va_list list)
{
	if (*input == 's')
		ft_putstr_fd(va_arg(list, char *), 1);
	if (*input == 'c')
		ft_putchar_fd(va_arg(list, int), 1);
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
