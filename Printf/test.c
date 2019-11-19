/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:13:52 by tpons             #+#    #+#             */
/*   Updated: 2019/11/19 14:33:31 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	char				*str;
	char				*strb;

	str = "Coucou comment ca va";
	strb = "Bien et toi ?";
	   printf("|%-0*.*s|\n", 20, 18, str);
	ft_printf("|%-0*.*s|\n", 20, 18, str);
	return (0);
}
