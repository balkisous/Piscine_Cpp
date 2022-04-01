# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 11:26:55 by bben-yaa          #+#    #+#              #
#    Updated: 2022/04/01 10:18:44 by bben-yaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= main.cpp \
			Convert.cpp

MEGA	= Convert

OBJ		= $(SRCS:.cpp=.o)
RM		= rm -rf
CC		= c++
FLAGS	= -Wall -Werror -Wextra -std=c++98

%.o : %.cpp
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
