/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:13:52 by tpons             #+#    #+#             */
/*   Updated: 2019/11/13 18:16:31 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	char				*str;
	char				*strb;

	str = "Coucou comment ca va";
	strb = "Bien et toi ?";
	ft_printf("%p\n%s?\n%s\n%c\n%d\n%%\n%X\n", str, str, strb, 'c', -123, -42);
	ft_printf("|%u|", 42);
	return (0);
}
