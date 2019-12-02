/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:13:52 by tpons             #+#    #+#             */
/*   Updated: 2019/12/02 16:32:38 by tpons            ###   ########.fr       */
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
	   printf("[%20p]", str);
	ft_printf("[%20p]", str);
	return (0);
}
