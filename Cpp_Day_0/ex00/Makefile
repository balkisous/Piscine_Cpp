# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 11:26:55 by bben-yaa          #+#    #+#              #
#    Updated: 2022/02/19 11:30:09 by bben-yaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= megaphone.cpp

MEGA	= megaphone

OBJ		= $(SRCS:.c=.o)
RM		= rm -rf
CC		= c++
FLAGS	= -Wall -Werror -Wextra -std=c++98

%.o : %.c
	$(CC) -c $(CFLAGS) $(FLAGS) -o $@ $<
				
${MEGA}:	${OBJ}
			$(CC) ${FLAGS} ${OBJ} -o ${MEGA}

all		: ${MEGA}

clean	:
				${RM} ${OBJ}

fclean	:	clean
				${RM} ${MEGA}

re		:	fclean all

.PHONY : all clean fclean re