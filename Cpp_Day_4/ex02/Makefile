# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: balkis <balkis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 11:26:55 by bben-yaa          #+#    #+#              #
#    Updated: 2022/03/23 11:41:24 by balkis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	=	main.cpp \
			AAnimal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongCat.cpp \
			WrongAnimal.cpp \
			Brain.cpp

EXEC	= integer

OBJ		= $(SRCS:.cpp=.o)
RM		= rm -rf
CC		= c++
FLAGS	= -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

%.o : %.cpp
	$(CC) -c $(CFLAGS) $(FLAGS) -o $@ $<
				
${EXEC}:	${OBJ}
			$(CC) ${FLAGS} ${OBJ}

all		: ${EXEC}

clean	:
				${RM} ${OBJ}

fclean	:	clean
				${RM} ./a.out

re		:	fclean all

.PHONY : all clean fclean re
