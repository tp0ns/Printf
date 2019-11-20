/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsign_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:16:03 by tpons             #+#    #+#             */
/*   Updated: 2019/11/20 11:58:09 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsign_adjust(t_flags flags, int len)
{

}

int	unsign_conv(t_flags flags, va_list args)
{
	char	*str;
	int		len;
	int		rtn;

	str = utoa(va_arg(args, unsigned int));
	len = ft_strlen(str);
	rtn = 0;
	if (flags.zero && !flags.minus && flags.precision < 0)
	{
		rtn += ft_adjust(flags.width - len, '0');
		rtn += 
	}
	else if ()
	{
		
	}
	else
		rtn += ft_putstr_fd
}