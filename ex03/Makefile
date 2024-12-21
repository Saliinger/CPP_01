NAME		= Unnecessary_violence
CXX			= c++
CXXFLAGS	= -Werror -Wall -Wextra -std=c++98

SRC			=	./src/HumanA.cpp \
				./src/HumanB.cpp \
				./src/Weapon.cpp \
				main.cpp

OBJ			=	$(SRC:.cpp=.o)

.phony: all re clean fclean

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o:		%.cpp
			$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all