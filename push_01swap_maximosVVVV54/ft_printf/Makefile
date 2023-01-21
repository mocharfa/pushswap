# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 03:14:39 by aoukhart          #+#    #+#              #
#    Updated: 2021/12/14 23:56:21 by mocharfa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_put_hex.c ft_put_d.c \
ft_put_s.c ft_putchar.c \

OBJECT = $(SRC:.c=.o)

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJECT)
	@gcc -Wall -Werror -Wextra -c $(SRC)
	@ar rc $(NAME) $(OBJECT)

clean : 
	@rm -rf $(OBJECT)

fclean : clean
	@rm -rf $(NAME)

re : fclean all