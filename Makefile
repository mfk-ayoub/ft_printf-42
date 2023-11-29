# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 11:14:09 by ayel-mou          #+#    #+#              #
#    Updated: 2023/11/28 06:06:33 by ayel-mou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_putchr.c ft_putnbr.c ft_putstr.c ft_printhex.c ft_printHEX.c\
	  ft_printpoint.c ft_putundec.c

FLAGES = -Wall -Wextra -Werror

CC = cc 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)

%.o : %.c
	$(CC) $(FLAGS) -c $<
	ar -rc $(NAME) $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
