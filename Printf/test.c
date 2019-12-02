/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:13:52 by tpons             #+#    #+#             */
/*   Updated: 2019/12/02 16:07:32 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static int	num_length(unsigned int n, int b)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= b;
		i++;
	}
	return (i);
}

int		put_nbr(unsigned int nb, char *base, char *str, int l)
{
	int	b;

	b = ft_strlen(base);
	if (l == 0)
	{
		str[l] = base[nb % b];
		return (0);
	}
	else
	{
		str[l] = base[nb % b];
		return (put_nbr(nb / b, base, str, --l));
	}
}

char		*ft_itoa_base(unsigned int nbr, char *base)
{
	int		b;
	char	*str;
	int		l;
	int		i;

	b = ft_strlen(base);
	l = num_length(nbr, b);
	i = 0;
	if (!(str = malloc(sizeof(char) * l + 1)))
		return (0);
	str[l] = '\0';
	put_nbr(nbr, base, str, l - 1);
	return (str);
}

int	main()
{
	printf("|%s|", ft_itoa_base(429, "0123456789abcdef"));
	return (0);
}

// int		main(void)
// {
// 	char				*str;
// 	char				*strb;

// 	str = "Coucou comment ca va";
// 	strb = "Bien et toi ?";
// 	//    printf("[%-05d]", -42);
// 	// ft_printf("[%-05d]", -42);
// 	return (0);
// }
