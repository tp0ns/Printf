/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:08:24 by tpons             #+#    #+#             */
/*   Updated: 2019/11/18 14:56:14 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "./Libft/libft.h"

typedef struct		s_flags
{
	int	minus;
	int	zero;
	int	width;
	int	precision;
	int	wild;
	int	advance;
	int	rtn;
}					t_flags;

int					ft_printf(const char *input, ...);
t_flags				init_flags(t_flags flags);
int					is_flag(char c);
t_flags				parser_flags(char *input, t_flags flags, va_list args);
// void				parser(const char *input, va_list args);

#endif
