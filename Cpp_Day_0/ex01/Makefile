# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 11:26:55 by bben-yaa          #+#    #+#              #
#    Updated: 2022/02/20 14:51:33 by bben-yaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	=	Contact.Classe.cpp \
			PhoneBook.Classe.cpp \
			main.cpp \

REPO	= repository

OBJ		= $(SRCS:.cpp=.o)
RM		= rm -rf
CC		= clang++
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