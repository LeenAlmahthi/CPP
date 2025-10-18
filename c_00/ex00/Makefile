C = c++
CFLAG = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
NAME = megaphone 
all: $(NAME)

$(NAME): $(OBJ)
	$(C) $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(C) $(CFLAG) -c $< -o $@
clean : 
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all 

.PHONY : all clean fclean re
