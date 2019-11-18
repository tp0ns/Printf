/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:08:24 by tpons             #+#    #+#             */
/*   Updated: 2019/11/18 18:59:31 by tpons            ###   ########.fr       */
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
	int	point;
	int	precision;
	int	advance;
}					t_flags;

int					ft_printf(const char *input, ...);

t_flags				parser_flags(const char *input, t_flags flags,
					va_list args);
t_flags				init_flags(t_flags flags);
t_flags				treat_flags(char input, t_flags flags, va_list args);
int					is_flag(char c);

int					parser_conv(char input, t_flags flags, va_list args);
int					ft_adjust(int width, char c);
int					char_conv(t_flags flags, va_list args);

#endif
