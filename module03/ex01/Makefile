C++ = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = scavtrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(C++) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re