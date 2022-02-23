# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 11:26:55 by bben-yaa          #+#    #+#              #
#    Updated: 2022/02/23 11:07:51 by bben-yaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	=	Contact.Classe.cpp \
			PhoneBook.Classe.cpp \
			main.cpp \

REPO	= my_repository

OBJ		= $(SRCS:.cpp=.o)
RM		= rm -rf
CC		= c++
FLAGS	= -Wall -Werror -Wextra -std=c++98

%.o : %.cpp
	$(CC) -c $(CFLAGS) $(FLAGS) -o $@ $<
				
${REPO}:	${OBJ}
			$(CC) ${FLAGS} ${OBJ} -o ${REPO}

all		: ${REPO}

clean	:
				${RM} ${OBJ}

fclean	:	clean
				${RM} ${REPO}

re		:	fclean all

.PHONY : all clean fclean re
