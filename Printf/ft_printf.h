/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:08:24 by tpons             #+#    #+#             */
/*   Updated: 2019/12/02 16:54:20 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
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

int					str_conv(t_flags flags, va_list args);
int					str_precision(char *str, int len, int precision, int mod);

int					unsign_conv(t_flags flags, va_list args);
int					unsign_minus(t_flags flags, int len, char *str);
int					unsign_precision(int precision, int len);
int					unsign_adjust(t_flags flags, int len);

int					int_conv(t_flags flags, va_list args);
int					int_minus(t_flags flags, int len, char *str, int nb);
int					int_precision(t_flags flags, int len, int nb);
int					int_adjust(t_flags flags, int len, int nb);

int					hexa_conv(t_flags flags, va_list args, char *str);
int					hexa_minus(t_flags flags, int len, char *str);
int					hexa_precision(int precision, int len);
int					hexa_adjust(t_flags flags, int len);
char				*ft_itoa_base(unsigned int nbr, char *base);

int					pos_conv(t_flags flags, va_list args);
int					pos_minus(t_flags flags, int len, char *str);
char				*ft_ulltoa_base(unsigned long long nbr, char *base);

#endif
