# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 11:26:55 by bben-yaa          #+#    #+#              #
#    Updated: 2022/02/24 09:02:17 by bben-yaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	=	main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp \

EXEC	= Human_fight

OBJ		= $(SRCS:.cpp=.o)
RM		= rm -rf
CC		= c++
FLAGS	= -Wall -Werror -Wextra -std=c++98

%.o : %.cpp
	$(CC) -c $(CFLAGS) $(FLAGS) -o $@ $<
				
${EXEC}:	${OBJ}
			$(CC) ${FLAGS} ${OBJ} -o ${EXEC}

all		: ${EXEC}

clean	:
				${RM} ${OBJ}

fclean	:	clean
				${RM} ${EXEC}

re		:	fclean all

.PHONY : all clean fclean re
