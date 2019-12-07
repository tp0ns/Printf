CC = gcc

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c flags_utils.c conv_utils.c char_conv.c str_conv.c int_conv.c \
		unsign_conv.c hexa_conv.c ft_itoa_base.c pos_conv.c ft_ulltoa_base.c percent_conv.c 

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS) 
		cd Libft && $(MAKE)
		cp Libft/libft.a $(NAME)
		ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
		rm -f $(OBJS)
		$(MAKE) clean -C ./Libft
fclean : clean
		rm -f $(NAME)
		rm -f libft.a
		$(MAKE) fclean -C ./Libft
re : fclean all

%.o: %.c
	$(CC) $(FLAGS) -I ft_printf.h -c $<  -o $(<:.c=.o)
# make -s && gcc test.c libftprintf.a && ./a.out
# make -s && gcc main.c libftprintf.a && ./a.out