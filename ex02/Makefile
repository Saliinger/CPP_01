NAME	= HI_THIS_IS_BRAIN
CC		= c++
CFLAGS	= -Werror -Wall -Wextra -std=c++98

SRC		=	main.cpp

OBJ	=	$(SRC:.cpp=.o)

.phony:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all