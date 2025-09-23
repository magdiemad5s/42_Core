

SRCS = ft_printf.c


OBJS = $(SRCS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra
INCLUDES = -I . -I libft
LIBFT = libft/libft.a
HDRS = ft_printf.h

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJS)
	@make -C libft
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(HDRS)

clean: 
	$(RM) $(OBJS)
	@make clean -C libft

fclean: clean
	$(RM) $(NAME)
	@make fclean -C libft

re: fclean all

.PHONY: all clean fclean re

