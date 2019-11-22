CC = gcc

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror -c

SRCS =	ft_printf.c flags_utils.c conv_utils.c char_conv.c str_conv.c \
		int_conv.c unsign_conv.c hexa_conv.c ft_itoa_base.c #percent_conv.c pos_conv.c 

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
		$(MAKE) -C ./Libft
		$(CC) $(SRCS) ft_printf.h $(FLAGS)
		ar r printf.a $(OBJS)
		libtool -static -o $(NAME) ./Libft/libft.a printf.a
		rm -f printf.a

all : $(NAME)

clean :
		rm -f $(OBJS)
		$(MAKE) clean -C ./Libft
fclean : clean
		rm -f $(NAME)
		$(MAKE) fclean -C ./Libft
re : fclean all

# make -s && gcc test.c libftprintf.a && ./a.out
# make -s && gcc main.c libftprintf.a && ./a.out