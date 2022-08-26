# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yalee <yalee@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/11 14:09:54 by yalee             #+#    #+#              #
#    Updated: 2022/08/19 15:38:10 by yalee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = get_next_line.c get_next_line_utils.c

OBJS = $(SRC:.c=.o)

NAME =  get_next_line.a

CCFLAGS = gcc -Wall -Wextra -Werror 

CCLIB = ar rcs $(NAME)

all: $(NAME)

$(NAME):
		$(CCFLAGS) $(SRC)
		./a.out


clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: $(NAME)