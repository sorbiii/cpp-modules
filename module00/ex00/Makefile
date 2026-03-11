#compiler
C++ = c++

#compiler flags 
FLAGS = -Wall -Wextra -Werror -std=c++98

#exec name
NAME = megaphone

#source files
SRC = Megaphone.cpp

#obj files
OBJ = $(SRC:.cpp=.o)

#default target
all: $(NAME)

#build
$(NAME): $(OBJ)
	$(C++) $(FLAGS) $(OBJ) -o $(NAME)

#compile obj files
%.o: %.cpp
	$(C++) $(FLAGS) -c $< -o $@

#clean obj files
clean:
	rm -f $(OBJ)

#remove executable and clean
fclean: clean
		rm -f $(NAME)

#rebuild
re: fclean all

.PHONY: all clean fclean re