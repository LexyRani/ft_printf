# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 21:00:49 by aceralin          #+#    #+#              #
#    Updated: 2022/06/20 18:50:08 by aceralin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ${addsuffix .c, \
					ft_printf \
					ft_print_str\
					ft_print_nbr \
					ft_print_unsigned \
					ft_print_hex \
					}

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS) libftprintf.h

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
