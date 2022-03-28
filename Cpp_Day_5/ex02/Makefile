# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 11:26:55 by bben-yaa          #+#    #+#              #
#    Updated: 2022/03/28 17:32:22 by bben-yaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	=	main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \

EXEC	= integer

OBJ		= $(SRCS:.cpp=.o)
RM		= rm -rf
CC		= c++
FLAGS	= -Wall -Werror -Wextra -std=c++98

%.o : %.cpp
	$(CC) -c $(CFLAGS) $(FLAGS) -o $@ $<
				
${EXEC}:	${OBJ}
			$(CC) ${FLAGS} ${OBJ}

all		: ${EXEC}

clean	:
				${RM} ${OBJ} *_shrubbery

fclean	:	clean
				${RM} ./a.out

re		:	fclean all

.PHONY : all clean fclean re
