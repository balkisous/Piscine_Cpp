# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: balkis <balkis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 11:26:55 by bben-yaa          #+#    #+#              #
#    Updated: 2022/03/09 10:18:01 by balkis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	=	main.cpp \
			Karen.cpp

EXEC	= karenFilter

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
