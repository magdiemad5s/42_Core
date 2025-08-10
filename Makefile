# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabu-aho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/07 11:02:54 by mabu-aho          #+#    #+#              #
#    Updated: 2025/08/10 00:03:03 by mabu-aho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c

OBJS = $(SRCS:.c=.o)

#BONUS = 

#BONUS_OBJS = $(BONUS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -I.

NAME = libft.a

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) #$(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus
