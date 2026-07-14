C++ = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = converter

SRC = main.cpp ScalarConverter.cpp

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
		rm -f *_shrubbery

re: fclean all

.PHONY: all clean fclean re